//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@class FPItem;

@interface FPUntrashOperation : FPTransformOperation
{
    FPItem *_restoreDirectory;
    id /* CDUnknownBlockType */ _untrashCompletionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ untrashCompletionBlock; // @synthesize untrashCompletionBlock=_untrashCompletionBlock;
// - (void).cxx_destruct;
- (id)fp_prettyDescription;
- (void)presendNotifications;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (NSUInteger)transformItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;
- (id)replicateForItems:(id)arg1;

@end

