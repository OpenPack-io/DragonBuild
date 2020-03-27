//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UISearchBar, UIView, UIViewController;
@protocol WFDrawerPane;

@interface WFDrawerItem : NSObject
{
    UIViewController<WFDrawerPane> *_drawerPane;
}

@property(nonatomic) __weak UIViewController<WFDrawerPane> *drawerPane; // @synthesize drawerPane=_drawerPane;
// - (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) UIView *titleView;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UISearchBar *searchBar;
- (id)initWithDrawerPane:(id)arg1;

@end

