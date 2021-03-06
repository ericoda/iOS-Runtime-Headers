/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNClustererContextBase : NSObject {
    NSString * _cacheDirectoryPath;
    bool  _readOnly;
    NSNumber * _threshold;
}

- (void).cxx_destruct;
- (id)_createGreedyClusterer:(Class)arg1 state:(id)arg2 error:(id*)arg3;
- (bool)_createGreedyClustererWith:(id)arg1 error:(id*)arg2;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(bool)arg4 threshold:(float)arg5 error:(id*)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 error:(id*)arg5;

@end
