//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, UIColor, UIFont;

@protocol FIUIChartAxisDescriptor <NSObject>
@property(nonatomic) double axisDescriptorPadding;
@property(retain, nonatomic) UIColor *highlightedLabelColor;
@property(retain, nonatomic) UIColor *unhighlightedLabelColor;
@property(retain, nonatomic) UIFont *labelFont;
@property(retain, nonatomic) id maxValue;
@property(retain, nonatomic) id minValue;
- (Class)expectedDataType;
- (NSArray *)axisLabels;

@optional
@property(nonatomic) double shadowBlur;
@property(nonatomic) CGSize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor;
@property(nonatomic) BOOL hideClippedLabels;
@property(nonatomic) double subAxisDescriptorPadding;
@property(retain, nonatomic) UIColor *unhighlightedSubLabelColor;
@property(retain, nonatomic) UIColor *highlightedSubLabelColor;
@property(retain, nonatomic) UIColor *selectedLabelColor;
@property(retain, nonatomic) UIFont *subLabelFont;
@property(nonatomic) NSUInteger subLabelAlignment;
@property(nonatomic) NSUInteger labelAlignment;
@property(retain, nonatomic) id highlightedValue;
- (void)selectLabel:(BOOL)arg1 atIndex:(NSUInteger)arg2;
- (NSString *)textForSubLabelAtIndex:(NSUInteger)arg1;
- (id)positionForSubLabelAtIndex:(NSUInteger)arg1;
- (NSUInteger)numSubLabels;
- (NSArray *)axisSubLabels;
- (NSArray *)xAxisLabelStringArray;
- (NSString *)textForLabelAtIndex:(NSUInteger)arg1;
- (id)positionForLabelAtIndex:(NSUInteger)arg1;
- (NSUInteger)numLabels;
@end

