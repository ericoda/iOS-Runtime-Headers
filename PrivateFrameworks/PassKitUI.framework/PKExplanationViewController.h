/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKExplanationViewController : UIViewController <PKPaymentSetupPrivacyFooterViewDelegate> {
    long long  _context;
    PKExplanationView * _explanationView;
    bool  _showCancelButton;
    bool  _showDoneButton;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) PKExplanationView *explanationView;
@property (nonatomic) bool showCancelButton;
@property (nonatomic) bool showDoneButton;

- (void).cxx_destruct;
- (void)_dismissViewController;
- (long long)context;
- (id)explanationView;
- (id)init;
- (id)initWithContext:(long long)arg1;
- (void)loadView;
- (id)pkui_navigationBarTintColor;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)privacyFooterLinkTapped:(id)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setShowDoneButton:(bool)arg1;
- (bool)showCancelButton;
- (bool)showDoneButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end