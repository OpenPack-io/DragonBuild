//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Montreal/MontrealNNDescription.h>

#import <Montreal/MontrealNNDescriptionProtocol-Protocol.h>

@class NSNumber, NSString;

@interface MontrealNNModelQuantization : MontrealNNDescription <MontrealNNDescriptionProtocol>
{
    NSString *_weightStorage;
    NSNumber *_weightStorageRange;
}

@property(readonly) NSNumber *weightStorageRange; // @synthesize weightStorageRange=_weightStorageRange;
@property(readonly) NSString *weightStorage; // @synthesize weightStorage=_weightStorage;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

