#ifndef OVERLAY_H
#define OVERLAY_H

struct COLOUR_BAND
{
	CVECTOR colour;
	int value;
	int flags;
};

typedef struct _PERCENTAGE_BAR
{
	char* tag;
	short xpos, ypos;
	short width, height;
	u_short position;
	u_short max;
	COLOUR_BAND* pColourBand;
	int flags, active;
} PERCENTAGE_BAR, * LPPERCENTAGE_BAR;

extern PERCENTAGE_BAR PlayerDamageBar;
extern PERCENTAGE_BAR Player2DamageBar;
extern PERCENTAGE_BAR DamageBar;
extern PERCENTAGE_BAR FelonyBar;
extern PERCENTAGE_BAR Player2FelonyBar;
extern PERCENTAGE_BAR ProxyBar;

extern int gDoOverlays;
extern int gWidescreenOverlayAlign;

//[A]
extern int gSpeedoType;
extern int gDisplaySpeedo;
extern int gDisplayGears;
extern int gDisplayRPM;
extern int gPercentageBarTextSize;

extern int gOverlayXPos;
extern int gOverlayXOppPos;

extern char OverlayFlashValue;

extern void InitOverlays(); // 0x00014A58
extern void DisplayOverlays(); // 0x00014C3C

//[A]
extern void DrawSpeedometer();
extern void DrawSpeedometer2();
extern void DrawGearDisplay();
extern void DrawGearDisplay2();
extern void DrawRPMDisplay();


extern void SetFullscreenDrawing(); // 0x00015E70

extern void InitPercentageBar(PERCENTAGE_BAR *bar, int size, COLOUR_BAND *pColourBand, char *tag); // 0x00015F20
extern void EnablePercentageBar(PERCENTAGE_BAR *bar, int max); // 0x00015F58

extern void DrawProximityBar(PERCENTAGE_BAR* bar);

extern void SetColourByValue(COLOUR_BAND *pColourBand, int value, CVECTOR *pOut); // 0x00015F6C
extern void TransparencyOn(void *potz, unsigned short tpage); // 0x00016098


#endif
