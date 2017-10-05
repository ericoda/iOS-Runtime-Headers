/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentPassActivationViewController : UIViewController {
    PKPeerPaymentCredential * _credential;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    PKTableHeaderView * _headerView;
    UIImage * _passSnapShot;
    PKPeerPaymentWebService * _peerPaymentWebService;
    PKPaymentProvisioningController * _provisioningController;
    long long  _setupContext;
    unsigned long long  _state;
}

- (void).cxx_destruct;
- (void)_beginSetup;
- (void)_completeProvisioningFlow;
- (void)_donePressed;
- (void)_handleError:(id)arg1;
- (bool)_hasDebitCard;
- (void)_setShowCheckmark:(bool)arg1;
- (void)_setShowSpinner:(bool)arg1;
- (void)_setState:(unsigned long long)arg1;
- (id)_titleStringForState;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 passSnapShot:(id)arg5;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end