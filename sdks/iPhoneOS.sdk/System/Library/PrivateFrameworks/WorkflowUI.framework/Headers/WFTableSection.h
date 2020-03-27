//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFTreeObserver-Protocol.h>

@class NSArray, NSMutableArray, NSString, WFTableDataSource, WFTableSectionTreeNode;

@interface WFTableSection : NSObject <WFTreeObserver>
{
    NSString *_headerText;
    NSString *_footerText;
    WFTableSectionTreeNode *_node;
    NSMutableArray *_mutableItems;
    long long _cellStyle;
    Class _cellClass;
    id /* CDUnknownBlockType */ _configurationBlock;
}

+ (id)sectionWithCellClass:(Class)arg1 representedObjects:(id)arg2 configurationBlock:(id /* CDUnknownBlockType */)arg3;
+ (id)sectionWithStyle:(long long)arg1 representedObjects:(id)arg2 configurationBlock:(id /* CDUnknownBlockType */)arg3;
+ (id)sectionWithItems:(id)arg1;
+ (id)section;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(readonly, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, nonatomic) NSMutableArray *mutableItems; // @synthesize mutableItems=_mutableItems;
@property(readonly, nonatomic) WFTableSectionTreeNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)performBatchUpdates:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)currentIndex;
- (id)tableView;
- (void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4;
- (NSUInteger)recursiveChildrenCount;
- (void)updateCellForItem:(id)arg1;
- (void)removeItemAtIndex:(NSUInteger)arg1;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addItem:(id)arg1;
- (void)setRepresentedObjects:(id)arg1;
@property(retain, nonatomic) NSArray *items;
@property(readonly, nonatomic) __weak WFTableDataSource *dataSource;
- (id)initWithCellClass:(Class)arg1 cellStyle:(long long)arg2 items:(id)arg3 representedObjects:(id)arg4 configurationBlock:(id /* CDUnknownBlockType */)arg5;

@end

