/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICNullSource : NSObject <_ICLexiconSourcing, _ICPredictionSourcing>

- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(float)arg4 handler:(id /* block */)arg5;
- (void)registerNameDelegate:(id)arg1;
- (void)searchForMeCardEmailAddressesWithTimeout:(int)arg1 handler:(id /* block */)arg2;
- (void)searchForMeCardRegionsWithTimeout:(int)arg1 handler:(id /* block */)arg2;
- (void)unregisterNameDelegate:(id)arg1;

@end
