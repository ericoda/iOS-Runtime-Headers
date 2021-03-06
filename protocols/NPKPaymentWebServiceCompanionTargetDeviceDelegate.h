/* Generated by RuntimeBrowser.
 */

@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate <NSObject>

@required

- (void)archiveWebServiceBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)archiveWebServiceContext:(PKPaymentWebServiceContext *)arg1;
- (void)handleAppletState:(PKFelicaTransitAppletState *)arg1 forUniqueID:(NSString *)arg2;
- (void)handlePaymentTransactions:(NSArray *)arg1 appletStates:(NSDictionary *)arg2 forUniqueIDs:(NSArray *)arg3;
- (void)handlePaymentWebServiceContextFromWatch:(PKPaymentWebServiceContext *)arg1;
- (void)handlePreconditionNotMetWithUniqueIDs:(NSArray *)arg1 shouldUnregister:(bool)arg2;
- (void)handlePreferredAID:(NSString *)arg1 forPassWithUniqueID:(NSString *)arg2;
- (void)handlePushToken:(NSString *)arg1;
- (void)handleRemoveTransactionsWithIdentifiers:(NSArray *)arg1;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(NSString *)arg1;
- (void)handleUpdatedPeerPaymentWebServiceContext:(PKPeerPaymentWebServiceContext *)arg1 account:(PKPeerPaymentAccount *)arg2;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)sendWebServiceContextToWatch;
- (void)setNewAuthRandom:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showPaymentSetupForAppDisplayName:(NSString *)arg1;

@end
