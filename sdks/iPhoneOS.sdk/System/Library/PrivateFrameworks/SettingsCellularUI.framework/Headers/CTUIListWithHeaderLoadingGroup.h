//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface CTUIListWithHeaderLoadingGroup : NSObject
{
    PSListController *_hostController;
    NSArray *_headerSpecifiers;
    NSArray *_contentSpecifiers;
    PSSpecifier *_spinnerSpecifier;
}

@property(retain, nonatomic) PSSpecifier *spinnerSpecifier; // @synthesize spinnerSpecifier=_spinnerSpecifier;
@property(retain, nonatomic) NSArray *contentSpecifiers; // @synthesize contentSpecifiers=_contentSpecifiers;
@property(retain, nonatomic) NSArray *headerSpecifiers; // @synthesize headerSpecifiers=_headerSpecifiers;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
// - (void).cxx_destruct;
- (id)specifiers;
- (id)initWithHostController:(id)arg1;

@end

