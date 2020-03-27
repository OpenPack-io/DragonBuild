//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SFUCryptor : NSObject
{
    int mOperation;
    struct _CCCryptor mCryptor;
    NSUInteger mBlockSize;
    BOOL mFinished;
    char mDecryptionInputBuffer;
    char mOutputBuffer;
    char mOutputBufferPos;
    NSUInteger mOutputBufferAvailable;
}

- (BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char )arg2 length:(NSUInteger)arg3 bytesRead:(NSUInteger )arg4 error:(id )arg5;
- (BOOL)cryptDataFromBuffer:(const char )arg1 length:(NSUInteger)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(unsigned int )arg5 error:(id )arg6;
- (BOOL)cryptDataFromBuffer:(const char )arg1 length:(NSUInteger)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id )arg5;
- (void)dealloc;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char )arg3 ivLength:(NSUInteger)arg4 usePKCS7Padding:(BOOL)arg5;
- (id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char )arg3 ivLength:(NSUInteger)arg4;

@end

