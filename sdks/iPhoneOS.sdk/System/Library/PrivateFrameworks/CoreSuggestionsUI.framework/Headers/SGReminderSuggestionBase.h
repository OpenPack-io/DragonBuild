//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsUI/SGSuggestion-Protocol.h>
#import <CoreSuggestionsUI/SGSuggestionCategory-Protocol.h>
#import <CoreSuggestionsUI/SGSuggestionExtensions-Protocol.h>

@class SGReminder;
@protocol SGSuggestionDelegate;

@interface SGReminderSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions>
{
    SGReminder *_reminder;
    id <SGSuggestionDelegate> _suggestionDelegate;
}

@property(nonatomic) __weak id <SGSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
// - (void).cxx_destruct;
- (id)suggestionsSecondTitle;
- (id)suggestionAttributedSubtitle;
- (id)suggestionSubtitle;
- (id)suggestionDismissAction;
- (id)primaryActionTitle;
- (id)realtimeSuggestion;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryId;
- (id)suggestionTitle;
- (id)suggestionPrimaryAction;
- (id)suggestionCategory;
- (id)initWithRealtimeReminder:(id)arg1;

@end

