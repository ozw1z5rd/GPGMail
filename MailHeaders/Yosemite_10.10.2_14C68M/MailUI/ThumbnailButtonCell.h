/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSButtonCell.h"

@class NSButton;

@interface ThumbnailButtonCell : NSButtonCell
{
    NSButton *_deleteButton;
    long long _trackingRectTag;
}

@property(nonatomic) long long trackingRectTag; // @synthesize trackingRectTag=_trackingRectTag;
@property(retain, nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (unsigned long long)focusRingType;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)_textColor;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)dealloc;

@end

