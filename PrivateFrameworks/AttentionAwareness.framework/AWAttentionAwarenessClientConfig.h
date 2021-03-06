/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWAttentionAwarenessClientConfig : NSObject {
    NSMutableDictionary * _notifyBlocks;
    NSMutableDictionary * _notifyQueues;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _supportedEvents;
}

+ (id)sharedClientConfig;

- (void).cxx_destruct;
- (void)cancelNotification:(struct AWNotification_s { }*)arg1;
- (id)init;
- (struct AWNotification_s { }*)notifySupportedEventsChangedWithQueue:(id)arg1 block:(id /* block */)arg2;
- (unsigned long long)supportedEvents;
- (void)updateState:(bool)arg1;

@end
