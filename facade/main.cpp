#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ResourceFetcher {
private:
    string url;
public:
    ResourceFetcher(string resource): url(resource) {}

    string fetch() {
        cout << "Fetching and downloading data from: " << url << endl;

        string path = "/mock_download";
        cout << "Downloaded and stored file at " << path << endl;
        return path;
    }
};

class CSVCleaner {
public:
    CSVCleaner() = default;

    void clean(string csv_res) {
        cout << "Cleaned CSV file at path: " << csv_res << ". Data is now ready to be consumed by visualizer" << endl;
    }
};

class Visualizer {
public:
    Visualizer() = default;

    void visualize(string csv_res) {
        cout << "Visualizing data from the CSV file." << endl;
    }
};

/**
 * A facade that provides a simple interface to visualize a CSV file
 */
class GraphAPI {
public:
    GraphAPI() = default;

    /**
     * Hides all the fetching, cleaning and visualizing
     * from the user.
     */
    void visualize() {
        ResourceFetcher fetcher {"www.sampleresource/sample.csv"};
        CSVCleaner cleaner;
        Visualizer visualizer;

        string csv_path = fetcher.fetch();

        cleaner.clean(csv_path);
        visualizer.visualize(csv_path);
    }
};

int main() {
    GraphAPI graphApi;

    graphApi.visualize();
    return 0;
}
