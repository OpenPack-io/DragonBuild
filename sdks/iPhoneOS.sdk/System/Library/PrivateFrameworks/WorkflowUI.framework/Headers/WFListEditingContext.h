//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WFListEditorUpdateItem, WFVariableEditingContext;

@interface WFListEditingContext : NSObject
{
    BOOL _key;
    BOOL _nested;
    WFVariableEditingContext *_variableContext;
    WFListEditorUpdateItem *_updateItem;
}

@property(nonatomic) BOOL nested; // @synthesize nested=_nested;
@property(nonatomic) BOOL key; // @synthesize key=_key;
@property(retain, nonatomic) WFListEditorUpdateItem *updateItem; // @synthesize updateItem=_updateItem;
@property(retain, nonatomic) WFVariableEditingContext *variableContext; // @synthesize variableContext=_variableContext;
// - (void).cxx_destruct;

@end

