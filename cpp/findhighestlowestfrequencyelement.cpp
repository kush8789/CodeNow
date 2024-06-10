// void countFreq(int arr[], int n)
// {
//     vector<bool> visited(n, false);
//     int maxFreq = 0, minFreq = n;
//     int maxEle = 0, minEle = 0;

//     for (int i = 0; i < n; i++) {

//         if (visited[i] == true)
//             continue;

//         int count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         if (count > maxFreq) {
//             maxEle = arr[i];
//             maxFreq = count;
//         }
//         if (count < minFreq) {
//             minEle = arr[i];
//             minFreq = count;
//         }
//     }
//     cout << "The highest frequency element is: " << maxEle << "\n";
//     cout << "The lowest frequency element is: " << minEle << "\n";
// }

//TC=O(n*n) SC=O(n)