/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPointCloud : NSObject {
    struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    }  _identifiersVector;
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__first_"^ {}  _pointsVector;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) const unsigned long long*identifiers;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;

+ (id)concatPointClouds:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_hitTestFromOriginwithDirection;
- (unsigned long long)count;
- (id)description;
- (const unsigned long long*)identifiers;
- (id)initWithPointsVector:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^ {}*)arg1 identifiersVector:(const struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *x_3_1_1; } x3; }*)arg2;
- (id)pointCloudByApplyingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;

@end
