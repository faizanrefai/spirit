/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIScrollView.h"

@class UIImageView, NSArray;
@protocol UIScrollViewDelegate;

@interface UIScrollView : UIView <NSCoding> {
@private
	CGSize _contentSize;
	UIEdgeInsets _contentInset;
	id _delegate;
	UIImageView* _verticalScrollIndicator;
	UIImageView* _horizontalScrollIndicator;
	UIEdgeInsets _scrollIndicatorInset;
	struct {
		unsigned tracking : 1;
		unsigned dragging : 1;
		unsigned bounceEnabled : 1;
		unsigned bouncesZoom : 1;
		unsigned zoomBouncing : 1;
		unsigned alwaysBounceHorizontal : 1;
		unsigned alwaysBounceVertical : 1;
		unsigned canCancelContentTouches : 1;
		unsigned delaysContentTouches : 1;
		unsigned programmaticScrollDisabled : 1;
		unsigned scrollDisabled : 1;
		unsigned scrollTriggered : 1;
		unsigned scrollDisabledOnTouchBegan : 1;
		unsigned ignoreNextTouchesMoved : 1;
		unsigned cancelNextContentTouchEnded : 1;
		unsigned inContentViewCall : 1;
		unsigned dontSelect : 1;
		unsigned contentTouched : 1;
		unsigned cantCancel : 1;
		unsigned directionalLockEnabled : 1;
		unsigned directionalLockAutoEnabled : 1;
		unsigned lockVertical : 1;
		unsigned lockHorizontal : 1;
		unsigned keepLocked : 1;
		unsigned showsHorizontalScrollIndicator : 1;
		unsigned showsVerticalScrollIndicator : 1;
		unsigned indicatorStyle : 2;
		unsigned inZoom : 1;
		unsigned hideIndicatorsInZoom : 1;
		unsigned pushedTrackingMode : 1;
		unsigned multipleDrag : 1;
		unsigned displayingScrollIndicators : 1;
		unsigned verticalIndicatorShrunk : 1;
		unsigned horizontalIndicatorShrunk : 1;
		unsigned contentFitDisableScrolling : 1;
		unsigned pagingEnabled : 1;
		unsigned dontScrollToTop : 1;
		unsigned scrollingToTop : 1;
		unsigned useGestures : 1;
		unsigned autoscrolling : 1;
		unsigned automaticContentOffsetAdjustmentDisabled : 1;
		unsigned delegateScrollViewDidScroll : 1;
	} _scrollViewFlags;
	float _scrollHysteresis;
	float _farthestDistance;
	CGPoint _initialTouchPosition;
	CGPoint _startTouchPosition;
	double _startTouchTime;
	CGPoint _startOffset;
	CGPoint _lastTouchPosition;
	double _lastTouchTime;
	double _lastUpdateTime;
	CGPoint _lastUpdateOffset;
	UIView* _contentView;
	float _minimumZoomScale;
	float _maximumZoomScale;
	float _unadjustedZoomScale;
	UIView* _zoomView;
	double _horizontalVelocity;
	double _verticalVelocity;
	double _previousHorizontalVelocity;
	double _previousVerticalVelocity;
	CGPoint _stopOffset;
	void* _scrollHeartbeat;
	CGSize _decelerationFactor;
	double _decelerationLnFactorH;
	double _decelerationLnFactorV;
	NSArray* _deferredBeginTouchesInfo;
	UIImageView** _shadows;
	id _scrollNotificationViews;
	CGSize _gridBounceLnFactor;
	double _contentOffsetAnimationDuration;
	int _fastScrollCount;
	float _fastScrollMultiplier;
	float _fastScrollStartMultiplier;
	double _fastScrollEndTime;
}
@property(assign, nonatomic) CGSize contentSize;
@property(assign, nonatomic) UIEdgeInsets contentInset;
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;
@property(assign, nonatomic) float maximumZoomScale;
@property(assign, nonatomic) BOOL scrollsToTop;
@property(readonly, assign, nonatomic, getter=isZoomBouncing) BOOL zoomBouncing;
@property(readonly, assign, nonatomic, getter=isZooming) BOOL zooming;
@property(assign, nonatomic) BOOL bouncesZoom;
@property(assign, nonatomic) float zoomScale;
@property(assign, nonatomic) float minimumZoomScale;
@property(assign, nonatomic) BOOL canCancelContentTouches;
@property(assign, nonatomic) BOOL delaysContentTouches;
@property(readonly, assign, nonatomic, getter=isDecelerating) BOOL decelerating;
@property(readonly, assign, nonatomic, getter=isDragging) BOOL dragging;
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;
@property(assign, nonatomic) float decelerationRate;
@property(assign, nonatomic) int indicatorStyle;
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;
@property(assign, nonatomic) BOOL showsVerticalScrollIndicator;
@property(assign, nonatomic) BOOL showsHorizontalScrollIndicator;
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property(assign, nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;
@property(assign, nonatomic) BOOL alwaysBounceHorizontal;
@property(assign, nonatomic) BOOL alwaysBounceVertical;
@property(assign, nonatomic) BOOL bounces;
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property(assign, nonatomic) CGPoint contentOffset;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)_pinchGesture;
-(void)_updatePinchGesture;
-(id)_panGesture;
-(id)_scrollViewTouchDelayGesture;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(void)removeFromSuperview;
-(void)_didMoveFromWindow:(id)window toWindow:(id)window2;
-(void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;
-(void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;
-(void)setProgrammaticScrollEnabled:(BOOL)enabled;
-(BOOL)isProgrammaticScrollEnabled;
-(float)horizontalScrollDecelerationFactor;
-(void)setHorizontalScrollDecelerationFactor:(float)factor;
-(float)verticalScrollDecelerationFactor;
-(void)setVerticalScrollDecelerationFactor:(float)factor;
-(BOOL)usesGestureRecognizers;
-(void)delayed:(id)delayed;
-(void)setUsesGestureRecognizers:(BOOL)recognizers;
-(void)flashScrollIndicators;
-(void)_setShowsBackgroundShadow:(BOOL)shadow;
-(BOOL)_showsBackgroundShadow;
-(void)setShowBackgroundShadow:(BOOL)shadow;
-(id)commonHitTest:(id)test;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)_usesDifferentHitTestForGestures;
-(id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;
-(void)_scrollViewDidEndDecelerating;
-(CGPoint)_touchPositionForTouches:(id)touches;
-(BOOL)_updatePanWithStartDelta:(CGSize)startDelta event:(id)event gesture:(id)gesture ignoringDirectionalScroll:(BOOL)scroll;
-(void)_endPanWithEvent:(id)event;
-(id)_getDelegateZoomView;
-(void)handlePan:(id)pan;
-(void)handlePinch:(id)pinch;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)_touchesEnded:(id)ended withEvent:(id)event wasCancelled:(BOOL)cancelled;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(BOOL)canHandleSwipes;
-(int)swipe:(int)swipe withEvent:(GSEventRef)event;
-(BOOL)cancelTouchTracking;
-(BOOL)cancelMouseTracking;
-(void)cancelNextContentTouchEnded;
-(BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;
-(BOOL)touchesShouldCancelInContentView:(id)touches;
-(CGPoint)_centeredScrollPointForPoint:(CGPoint)point scale:(float)scale;
-(CGPoint)_zoomScrollPointForRect:(CGRect)rect scale:(float)scale;
-(float)_zoomRubberBandScaleForScale:(float)scale;
-(void)setZoomScale:(float)scale withAnchorPoint:(CGPoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated;
-(void)setZoomScale:(float)scale animated:(BOOL)animated;
-(void)zoomToRect:(CGRect)rect animated:(BOOL)animated;
@end

@interface UIScrollView (Static)
-(void)_notifyDidScroll;
-(void)_smoothScroll:(double)scroll;
-(BOOL)_continueScrollingAtOffset:(CGPoint)offset;
-(void)_popTrackingRunLoopMode;
-(void)_runLoopModePopped:(id)popped;
-(void)_startTimer:(BOOL)timer;
-(void)_deferredBeginTouchesInContentView;
-(void)_adjustScrollerIndicators:(BOOL)indicators alwaysShowingThem:(BOOL)them;
-(void)_adjustContentOffsetIfNecessary;
-(void)_hideScrollIndicators;
@end

@interface UIScrollView (UIScrollViewInternal)
@property(assign, nonatomic, getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;
-(void)_adjustBackgroundShadowsForContentSize;
-(void)_stopScrollDecelerationNotify:(BOOL)notify;
-(void)_stopScrollingNotify:(BOOL)notify dealloc:(BOOL)dealloc pin:(BOOL)pin;
-(void)_resetScrollingWithEvent:(GSEventRef)event;
-(void)_resetScrollingWithUIEvent:(id)uievent;
-(BOOL)_resetScrollingForGestureEvent:(id)gestureEvent;
-(void)_scrollGestureFailed;
-(void)_addScrollNotificationView:(id)view;
-(void)_removeScrollNotificationView:(id)view;
-(BOOL)_canCancelContentTouches:(id)touches;
-(BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;
-(void)_addContentSubview:(id)subview atBack:(BOOL)back;
-(void)_moveContentSubview:(id)subview toBack:(BOOL)back;
-(void)_setContentOffsetAnimationDuration:(double)duration;
-(double)_contentOffsetAnimationDuration;
-(void)_setContentOffset:(CGPoint)offset animated:(BOOL)animated animationCurve:(int)curve;
-(void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)enabled;
-(void)_scrollViewAnimationEnded;
-(BOOL)_scrollToTop;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(id)_defaultHitTest:(CGPoint)test withEvent:(id)event;
-(id)_hitTestForContentView:(CGPoint)contentView withEvent:(id)event;
-(void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;
-(id)_touchedContentView;
-(double)_touchDelayForScrollDetection;
-(CGPoint)_stopOffset;
-(double)_horizontalVelocity;
-(double)_verticalVelocity;
-(void)_shiftOffset:(CGSize)offset;
-(void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo lastAdjustment:(float*)adjustment;
-(BOOL)_canScrollX;
-(BOOL)_canScrollY;
-(void)_setAutoscrolling:(BOOL)autoscrolling;
-(BOOL)_isAutoscrolling;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)offset;
-(CGRect)contentFrameForView:(id)view;
@end

@interface UIScrollView (UIScrollViewGestures)
-(CGPoint)offset;
-(void)setOffset:(CGPoint)offset;
-(void)setScrollingEnabled:(BOOL)enabled;
-(void)_startGesture:(id)gesture withEvent:(id)event;
-(void)_changedGesture:(id)gesture withEvent:(id)event;
-(void)_endGesture:(id)gesture withEvent:(id)event;
-(void)didFinishGesture:(int)gesture inView:(id)view forEvent:(GSEventRef)event;
@end

@interface UIScrollView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

@interface UIScrollView (UIAutoscrollAdditions)
-(BOOL)_isScrollingEnabled;
@end

@interface UIScrollView (UITextRangeViewScrollerSupport)
-(void)_enableScrollingIfNecessary;
-(void)_disableScrollingIfNecessary;
@end
