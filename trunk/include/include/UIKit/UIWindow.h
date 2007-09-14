/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class LKContext, UIFingerInfo, UIResponder;

@interface UIWindow : UIView
{
    struct __GSWindow *_window;
    float _windowLevel;
    LKContext *_layerContext;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    UIResponder *_firstResponder;
    struct _UIRenderInfo *_renderInfo;
    UIFingerInfo *_fingerInfo;
    struct {
        unsigned int dontBecomeKeyOnOrderFront:1;
        unsigned int output:1;
        unsigned int inGesture:1;
        unsigned int trackingStatusBar:1;
        unsigned int resetLevelOnSuspend:1;
        unsigned int cancelScroller:1;
        unsigned int reserved:26;
    } _windowFlags;
}

+ (struct CGRect)constrainFrameToScreen:(struct CGRect)fp8;	// IMP=0x323c2464
+ (id)keyWindow;	// IMP=0x323beebc
- (unsigned int)_becomeFirstResponderWhenPossible;	// IMP=0x323c104c
- (void)_beginModalSession;	// IMP=0x323c08bc
- (BOOL)_canExistBeyondSuspension;	// IMP=0x323bf4b4
- (BOOL)_clearMouseView;	// IMP=0x323c1188
- (BOOL)_containedInAbsoluteResponderChain;	// IMP=0x323c0ac8
- (struct CGImage *)_createCGImageRefRepresentationInFrame:(struct CGRect)fp8;	// IMP=0x323c1860
- (void)_endModalSession;	// IMP=0x323c09c4
- (id)_firstResponder;	// IMP=0x323c1044
- (void)_handleMouseDown:(struct __GSEvent *)fp8;	// IMP=0x323bf970
- (void)_handleMouseDragged:(struct __GSEvent *)fp8;	// IMP=0x323bfaf8
- (void)_handleMouseEntered:(struct __GSEvent *)fp8;	// IMP=0x323bfbec
- (void)_handleMouseExited:(struct __GSEvent *)fp8;	// IMP=0x323bfdf4
- (void)_handleMouseMoved:(struct __GSEvent *)fp8;	// IMP=0x323bfce4
- (void)_handleMouseUp:(struct __GSEvent *)fp8;	// IMP=0x323bfb18
- (BOOL)_isHidden;	// IMP=0x323c1394
- (BOOL)_needsResetLevel;	// IMP=0x323c13f4
- (void)_noteStatusBarHeightChanged:(float)fp8 fence:(int)fp12;	// IMP=0x323c1308
- (BOOL)_pointInStatusBar:(struct CGPoint)fp8;	// IMP=0x323bf8c8
- (void)_registerChargedView:(id)fp8;	// IMP=0x323c0f1c
- (void)_registerSwipeView:(id)fp8;	// IMP=0x323c0f44
- (void)_resetLevel;	// IMP=0x323c1404
- (void)_setCancelScroller:(BOOL)fp8;	// IMP=0x323c18d4
- (void)_setFirstResponder:(id)fp8;	// IMP=0x323c0f6c
- (void)_setHidden:(BOOL)fp8;	// IMP=0x323c13b8
- (void)_setMouseDownView:(id)fp8 withEvent:(struct __GSEvent *)fp12;	// IMP=0x323c1054
- (void)_setMouseEnteredView:(id)fp8;	// IMP=0x323c1140
- (void)_setNeedsResetLevel:(BOOL)fp8;	// IMP=0x323c13dc
- (void)_statusBarMouseDown:(struct __GSEvent *)fp8;	// IMP=0x323c285c
- (void)_statusBarMouseDragged:(struct __GSEvent *)fp8;	// IMP=0x323c2940
- (void)_statusBarMouseUp:(struct __GSEvent *)fp8;	// IMP=0x323c29a8
- (void)_unregisterChargedView:(id)fp8;	// IMP=0x323c0f30
- (void)_unregisterSwipeView:(id)fp8;	// IMP=0x323c0f58
- (id)contentView;	// IMP=0x323c0ecc
- (int)controlTint;	// IMP=0x323bf488
- (struct CGPoint)convertDeviceToWindow:(struct CGPoint)fp8;	// IMP=0x323c0b48
- (struct CGPoint)convertWindowToDevice:(struct CGPoint)fp8;	// IMP=0x323c0ad0
- (void *)createCoreSurface;	// IMP=0x323c16b4
- (void *)createCoreSurfaceWithFrame:(struct CGRect)fp8;	// IMP=0x323c1440
- (void)dealloc;	// IMP=0x323bef7c
- (id)firstResponder;	// IMP=0x323c0fd4
- (void)handleStatusBarHeightChange;	// IMP=0x323c0c50
- (id)initWithContentRect:(struct CGRect)fp8;	// IMP=0x323beedc
- (float)level;	// IMP=0x323c0be4
- (void)makeKey:(id)fp8;	// IMP=0x323bf8ac
- (id)nextResponder;	// IMP=0x323c0ab4
- (void)orderFront:(id)fp8;	// IMP=0x323bf4bc
- (void)orderOut:(id)fp8;	// IMP=0x323bf87c
- (int)output;	// IMP=0x323c0c1c
- (id)representation;	// IMP=0x323bf1bc
- (void)sendEvent:(struct __GSEvent *)fp8;	// IMP=0x323bfe30
- (void)setBecomeKeyOnOrderFront:(BOOL)fp8;	// IMP=0x323c0bec
- (void)setContentView:(id)fp8;	// IMP=0x323bf088
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x323c0d18
- (void)setLevel:(float)fp8;	// IMP=0x323c0bc0
- (void)setOutput:(int)fp8;	// IMP=0x323c0c04
- (void)setTransform:(struct CGAffineTransform)fp8;	// IMP=0x323c0dcc
- (BOOL)shouldRespondToStatusBarHeightChange;	// IMP=0x323bf180
- (void)synchronizeDrawingWithID:(int)fp8;	// IMP=0x323c0c2c
- (struct CGPoint)warpPoint:(struct CGPoint)fp8;	// IMP=0x323c1e9c
- (void)writeSnapshotsToDir:(id)fp8;	// IMP=0x323bf2b8

@end
