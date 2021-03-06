/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDDeviceRegistrationServiceCoordinator : NSObject {
    PDPaymentWebServiceCoordinator * _paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator * _peerPaymentWebServiceCoordinator;
}

@property (nonatomic, retain) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property (nonatomic, retain) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;

- (void).cxx_destruct;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(id /* block */)arg2;
- (void)notePasscodeChanged;
- (id)paymentWebServiceCoordinator;
- (id)peerPaymentWebServiceCoordinator;
- (void)performDeviceRegistrationWithCompletion:(id /* block */)arg1;
- (void)setPaymentWebServiceCoordinator:(id)arg1;
- (void)setPeerPaymentWebServiceCoordinator:(id)arg1;

@end
