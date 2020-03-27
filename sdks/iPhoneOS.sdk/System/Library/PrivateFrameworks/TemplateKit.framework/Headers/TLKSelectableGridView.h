//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray;
@protocol TLKSelectableGridViewDelegate;

@interface TLKSelectableGridView : TLKView <NUIContainerViewDelegate>
{
    long long _selectedIndex;
    NSArray *_tuples;
    id <TLKSelectableGridViewDelegate> _delegate;
    NSMutableArray *_buttons;
}

+ (NSUInteger)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(CGSize)arg2 containerView:(id)arg3;
+ (NSUInteger)maxColumns;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property __weak id <TLKSelectableGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tuples; // @synthesize tuples=_tuples;
// - (void).cxx_destruct;
- (id)arrangedEntrySubviews;
- (CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)selectableGridButtonPressed:(id)arg1;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (id)_createButton;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3;
- (void)observedPropertiesChanged;
- (id)setupContentView;

@end

