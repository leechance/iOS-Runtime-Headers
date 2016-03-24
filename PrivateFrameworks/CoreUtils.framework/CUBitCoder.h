/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBitCoder : NSObject {
    NSDictionary *_schema;
}

@property (nonatomic, copy) NSDictionary *schema;

- (unsigned long long)_readValue:(struct __CFBitVector { }*)arg1 bitCount:(unsigned int)arg2 bitIndex:(unsigned int*)arg3 err:(int*)arg4;
- (void)_writeValue:(unsigned long long)arg1 bitCount:(unsigned int)arg2 bitVector:(struct __CFBitVector { }*)arg3;
- (void)dealloc;
- (id)decodeBytes:(const void*)arg1 length:(unsigned long)arg2 error:(id*)arg3;
- (id)decodeData:(id)arg1 error:(id*)arg2;
- (id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 error:(id*)arg3;
- (id)schema;
- (void)setSchema:(id)arg1;

@end
