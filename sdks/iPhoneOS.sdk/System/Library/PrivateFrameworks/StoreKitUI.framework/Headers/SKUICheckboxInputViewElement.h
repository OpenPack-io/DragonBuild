//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIInputViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUICheckboxInputViewElement : SKUIInputViewElement
{
    BOOL _disabled;
    BOOL _selected;
}

@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (NSUInteger)elementType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

