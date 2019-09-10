# LEGONavigationController

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

LEGONavigationController is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

### podfile

To integrate AFNetworking into your Xcode project using CocoaPods, specify it in your Podfile:

```
source 'https://github.com/legokit/Specs.git'
platform :ios, '8.0'

target 'TargetName' do
pod 'LEGONavigationController'
end

```
Then, run the following command:

$ pod install or $ pod update or pod update --no-repo-update

## Usage

```
UIViewController+LEGONavigationView

// 设置title
[self.navigationView setTitle:LEGOLocalString(@"title", nil)];
// 设置color
self.navigationView.backgroundColor = [UIColor clearColor];
// 添加image到导航栏
[self.navigationView addLeftButtonWithImage:[UIImage imageNamed:@"icon_general_back"] clickCallBack:^(__kindof UIView *view) {
    
}];
[self.navigationView addRightButtonWithImage:[UIImage imageNamed:@"icon_general_share"] clickCallBack:^(__kindof UIView *view) {
   
}];

// 添加title到导航栏
[self.navigationView addLeftButtonWithTitle:@"left text" clickCallBack:^(__kindof UIView * _Nullable view) {

}];
[self.navigationView addRightButtonWithTitle:@"right text" clickCallBack:^(__kindof UIView * _Nullable view) {

}];

// 添加title和image到导航栏
[self.navigationView addLeftButtonWithTitle:@"left text" image:[UIImage imageNamed:@"back"] clickCallBack:^(__kindof UIView * _Nullable view) {
        
 }];
[self.navigationView addRightButtonWithTitle:@"right text" image:[UIImage imageNamed:@"icon"] clickCallBack:^(__kindof UIView * _Nullable view) {
        
}];

// 添加自定义view至导航栏
[self.navigationView addCustomView:view clickCallBack:^(__kindof UIView * _Nullable view) {
        
}];
```


## Author

564008993@qq.com, 564008993@qq.com

## License

LEGONavigationController is available under the MIT license. See the LICENSE file for more info.
