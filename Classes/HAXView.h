//  HAXView.h
//  Created by Kocsis Olivér on 2014-05-12
//  Copyright 2014 Joinect Technologies

#import <Cocoa/Cocoa.h>
#import <Haxcessibility/HAXElement.h>

@interface HAXView : HAXElement

@property (nonatomic, assign) CGPoint carbonOrigin;
@property (nonatomic, assign, readonly) NSPoint origin;
@property (nonatomic, assign) NSSize size;
@property (nonatomic, assign) CGRect carbonFrame;
@property (nonatomic, assign, readonly) NSRect frame;
@property (nullable, readonly) NSString *title;
@property (nullable, readonly) NSScreen *screen;
@property (nonatomic, readonly, getter=isFullscreen) BOOL fullscreen;

@end
