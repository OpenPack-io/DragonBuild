//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSDictionary, NSNumber;

@interface EDAMBusinessQueryResult : FATObject
{
    NSNumber *_totalNotebooks;
    NSDictionary *_totalNotesByNotebook;
    NSArray *_experts;
    NSArray *_matchingNotebooks;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSArray *matchingNotebooks; // @synthesize matchingNotebooks=_matchingNotebooks;
@property(retain, nonatomic) NSArray *experts; // @synthesize experts=_experts;
@property(retain, nonatomic) NSDictionary *totalNotesByNotebook; // @synthesize totalNotesByNotebook=_totalNotesByNotebook;
@property(retain, nonatomic) NSNumber *totalNotebooks; // @synthesize totalNotebooks=_totalNotebooks;
// - (void).cxx_destruct;

@end

