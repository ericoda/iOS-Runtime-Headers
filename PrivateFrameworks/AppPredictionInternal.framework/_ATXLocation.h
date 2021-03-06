/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXLocation : NSObject {
    NSUUID * _uuid;
    NSArray * _visits;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSArray *visits;

- (void).cxx_destruct;
- (void)addVisitFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)init;
- (id)initWithUUID:(id)arg1 visits:(id)arg2;
- (id)uuid;
- (id)visits;

@end
