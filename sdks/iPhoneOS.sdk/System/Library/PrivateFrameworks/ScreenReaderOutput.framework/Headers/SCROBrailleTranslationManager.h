//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRLTTranslationService, NSString;
@protocol OS_dispatch_queue;

@interface SCROBrailleTranslationManager : NSObject
{
    BOOL _tableSupportsContractedBraille;
    BOOL _tableSupportsEightDotBraille;
    BOOL _alwaysUsesNemethCodeForTechnicalText;
    NSString *_queue_defaultLanguage;
    BRLTTranslationService *_translationService;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) BRLTTranslationService *translationService; // @synthesize translationService=_translationService;
@property(nonatomic) BOOL alwaysUsesNemethCodeForTechnicalText; // @synthesize alwaysUsesNemethCodeForTechnicalText=_alwaysUsesNemethCodeForTechnicalText;
@property(readonly, nonatomic) BOOL primaryTableSupportsEightDotBraille; // @synthesize primaryTableSupportsEightDotBraille=_tableSupportsEightDotBraille;
@property(readonly, nonatomic) BOOL primaryTableSupportsContractedBraille; // @synthesize primaryTableSupportsContractedBraille=_tableSupportsContractedBraille;
// - (void).cxx_destruct;
- (BOOL)primaryTableSupportsRoundTripping;
- (id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(NSUInteger)arg3 locations:(id )arg4;
- (id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(NSUInteger)arg3 textPositionsRange:(_NSRange)arg4 locations:(id )arg5;
@property(copy, nonatomic) NSString *defaultLanguage; // @synthesize defaultLanguage=_queue_defaultLanguage;
- (void)loadTranslatorWithServiceIdentifier:(id)arg1 forUnitTesting:(BOOL)arg2;
- (void)loadTranslatorWithServiceIdentifier:(id)arg1;
- (id)init;

@end

