//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028308C.hpp"
#include "fn_80283054.hpp"
#include "fn_80283358.hpp"



void fn_8028308C(PPC::Runtime::GCContext* context)
{
/*8028308C 0027FE8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80283090 0027FE90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80283094 0027FE94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80283098 0027FE98*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8028309C 0027FE9C*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*802830A0 0027FEA0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802830A4 0027FEA4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802830A8 0027FEA8*/ PPC::Runtime::ASM::beq(.L_80283340);
/*802830AC 0027FEAC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802830B0 0027FEB0*/ PPC::Runtime::ASM::b(.L_80283338);
RUNTIME_PPC_JUMP_LABEL(.L_802830B4, 0x802830B4) //this is a jump label
/*802830B4 0027FEB4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802830B8 0027FEB8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802830BC 0027FEBC*/ PPC::Runtime::ASM::beq(.L_802832A8);
/*802830C0 0027FEC0*/ PPC::Runtime::ASM::b(.L_802832A0);
RUNTIME_PPC_JUMP_LABEL(.L_802830C4, 0x802830C4) //this is a jump label
/*802830C4 0027FEC4*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802830C8 0027FEC8*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*802830CC 0027FECC*/ PPC::Runtime::ASM::beq(.L_80283210);
/*802830D0 0027FED0*/ PPC::Runtime::ASM::b(.L_80283208);
RUNTIME_PPC_JUMP_LABEL(.L_802830D4, 0x802830D4) //this is a jump label
/*802830D4 0027FED4*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*802830D8 0027FED8*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*802830DC 0027FEDC*/ PPC::Runtime::ASM::beq(.L_80283178);
/*802830E0 0027FEE0*/ PPC::Runtime::ASM::b(.L_80283170);
RUNTIME_PPC_JUMP_LABEL(.L_802830E4, 0x802830E4) //this is a jump label
/*802830E4 0027FEE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*802830E8 0027FEE8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802830EC 0027FEEC*/ PPC::Runtime::ASM::bl(fn_8028308C);
/*802830F0 0027FEF0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*802830F4 0027FEF4*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*802830F8 0027FEF8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*802830FC 0027FEFC*/ PPC::Runtime::ASM::b(.L_80283164);
RUNTIME_PPC_JUMP_LABEL(.L_80283100, 0x80283100) //this is a jump label
/*80283100 0027FF00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80283104 0027FF04*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80283108 0027FF08*/ PPC::Runtime::ASM::beq(.L_80283160);
/*8028310C 0027FF0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80283110 0027FF10*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80283114 0027FF14*/ PPC::Runtime::ASM::beq(.L_80283160);
/*80283118 0027FF18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8028311C 0027FF1C*/ PPC::Runtime::ASM::bl(fn_80283054);
/*80283120 0027FF20*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80283124 0027FF24*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80283128 0027FF28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8028312C 0027FF2C*/ PPC::Runtime::ASM::bl(fn_803F7870);
/*80283130 0027FF30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80283134 0027FF34*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80283138 0027FF38*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8028313C 0027FF3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*80283140 0027FF40*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 12, 7);
/*80283144 0027FF44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*80283148 0027FF48*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8028314C 0027FF4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80283150 0027FF50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*80283154 0027FF54*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x50);
/*80283158 0027FF58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*8028315C 0027FF5C*/ PPC::Runtime::ASM::bl(fn_80283358);
RUNTIME_PPC_JUMP_LABEL(.L_80283160, 0x80283160) //this is a jump label
/*80283160 0027FF60*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80283164, 0x80283164) //this is a jump label
/*80283164 0027FF64*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80283168 0027FF68*/ PPC::Runtime::ASM::bne(.L_80283100);
/*8028316C 0027FF6C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80283170, 0x80283170) //this is a jump label
/*80283170 0027FF70*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80283174 0027FF74*/ PPC::Runtime::ASM::bne(.L_802830E4);
RUNTIME_PPC_JUMP_LABEL(.L_80283178, 0x80283178) //this is a jump label
/*80283178 0027FF78*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8028317C 0027FF7C*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*80283180 0027FF80*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80283184 0027FF84*/ PPC::Runtime::ASM::b(.L_802831FC);
RUNTIME_PPC_JUMP_LABEL(.L_80283188, 0x80283188) //this is a jump label
/*80283188 0027FF88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8028318C 0027FF8C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80283190 0027FF90*/ PPC::Runtime::ASM::beq(.L_802831F8);
/*80283194 0027FF94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80283198 0027FF98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8028319C 0027FF9C*/ PPC::Runtime::ASM::beq(.L_802831F8);
/*802831A0 0027FFA0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BB4D0 @ Get_MemoryOffset_HighBit);
/*802831A4 0027FFA4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BB4D0 @ Get_MemoryOffset_LowBit);
/*802831A8 0027FFA8*/ PPC::Runtime::ASM::bl(fn_HSD_TObjLoadDesc);
/*802831AC 0027FFAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*802831B0 0027FFB0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802831B4 0027FFB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802831B8 0027FFB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802831BC 0027FFBC*/ PPC::Runtime::ASM::bl(fn_803F7870);
/*802831C0 0027FFC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802831C4 0027FFC4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*802831C8 0027FFC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802831CC 0027FFCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*802831D0 0027FFD0*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 12, 7);
/*802831D4 0027FFD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*802831D8 0027FFD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802831DC 0027FFDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802831E0 0027FFE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*802831E4 0027FFE4*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x50);
/*802831E8 0027FFE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*802831EC 0027FFEC*/ PPC::Runtime::ASM::beq(.L_802831F8);
/*802831F0 0027FFF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802831F4 0027FFF4*/ PPC::Runtime::ASM::bl(fn_HSD_MObjCompileTev);
RUNTIME_PPC_JUMP_LABEL(.L_802831F8, 0x802831F8) //this is a jump label
/*802831F8 0027FFF8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_802831FC, 0x802831FC) //this is a jump label
/*802831FC 0027FFFC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80283200 00280000*/ PPC::Runtime::ASM::bne(.L_80283188);
/*80283204 00280004*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80283208, 0x80283208) //this is a jump label
/*80283208 00280008*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8028320C 0028000C*/ PPC::Runtime::ASM::bne(.L_802830D4);
RUNTIME_PPC_JUMP_LABEL(.L_80283210, 0x80283210) //this is a jump label
/*80283210 00280010*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80283214 00280014*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*80283218 00280018*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8028321C 0028001C*/ PPC::Runtime::ASM::b(.L_80283294);
RUNTIME_PPC_JUMP_LABEL(.L_80283220, 0x80283220) //this is a jump label
/*80283220 00280020*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80283224 00280024*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80283228 00280028*/ PPC::Runtime::ASM::beq(.L_80283290);
/*8028322C 0028002C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80283230 00280030*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80283234 00280034*/ PPC::Runtime::ASM::beq(.L_80283290);
/*80283238 00280038*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BB4D0 @ Get_MemoryOffset_HighBit);
/*8028323C 0028003C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BB4D0 @ Get_MemoryOffset_LowBit);
/*80283240 00280040*/ PPC::Runtime::ASM::bl(fn_HSD_TObjLoadDesc);
/*80283244 00280044*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*80283248 00280048*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8028324C 0028004C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80283250 00280050*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80283254 00280054*/ PPC::Runtime::ASM::bl(fn_803F7870);
/*80283258 00280058*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8028325C 0028005C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80283260 00280060*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80283264 00280064*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80283268 00280068*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 12, 7);
/*8028326C 0028006C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80283270 00280070*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80283274 00280074*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80283278 00280078*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*8028327C 0028007C*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x50);
/*80283280 00280080*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80283284 00280084*/ PPC::Runtime::ASM::beq(.L_80283290);
/*80283288 00280088*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8028328C 0028008C*/ PPC::Runtime::ASM::bl(fn_HSD_MObjCompileTev);
RUNTIME_PPC_JUMP_LABEL(.L_80283290, 0x80283290) //this is a jump label
/*80283290 00280090*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80283294, 0x80283294) //this is a jump label
/*80283294 00280094*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80283298 00280098*/ PPC::Runtime::ASM::bne(.L_80283220);
/*8028329C 0028009C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802832A0, 0x802832A0) //this is a jump label
/*802832A0 002800A0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802832A4 002800A4*/ PPC::Runtime::ASM::bne(.L_802830C4);
RUNTIME_PPC_JUMP_LABEL(.L_802832A8, 0x802832A8) //this is a jump label
/*802832A8 002800A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802832AC 002800AC*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*802832B0 002800B0*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*802832B4 002800B4*/ PPC::Runtime::ASM::b(.L_8028332C);
RUNTIME_PPC_JUMP_LABEL(.L_802832B8, 0x802832B8) //this is a jump label
/*802832B8 002800B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*802832BC 002800BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802832C0 002800C0*/ PPC::Runtime::ASM::beq(.L_80283328);
/*802832C4 002800C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802832C8 002800C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802832CC 002800CC*/ PPC::Runtime::ASM::beq(.L_80283328);
/*802832D0 002800D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BB4D0 @ Get_MemoryOffset_HighBit);
/*802832D4 002800D4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BB4D0 @ Get_MemoryOffset_LowBit);
/*802832D8 002800D8*/ PPC::Runtime::ASM::bl(fn_HSD_TObjLoadDesc);
/*802832DC 002800DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*802832E0 002800E0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802832E4 002800E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*802832E8 002800E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802832EC 002800EC*/ PPC::Runtime::ASM::bl(fn_803F7870);
/*802832F0 002800F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*802832F4 002800F4*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*802832F8 002800F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802832FC 002800FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80283300 00280100*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 12, 7);
/*80283304 00280104*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80283308 00280108*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8028330C 0028010C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80283310 00280110*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*80283314 00280114*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x50);
/*80283318 00280118*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*8028331C 0028011C*/ PPC::Runtime::ASM::beq(.L_80283328);
/*80283320 00280120*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80283324 00280124*/ PPC::Runtime::ASM::bl(fn_HSD_MObjCompileTev);
RUNTIME_PPC_JUMP_LABEL(.L_80283328, 0x80283328) //this is a jump label
/*80283328 00280128*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8028332C, 0x8028332C) //this is a jump label
/*8028332C 0028012C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80283330 00280130*/ PPC::Runtime::ASM::bne(.L_802832B8);
/*80283334 00280134*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80283338, 0x80283338) //this is a jump label
/*80283338 00280138*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8028333C 0028013C*/ PPC::Runtime::ASM::bne(.L_802830B4);
RUNTIME_PPC_JUMP_LABEL(.L_80283340, 0x80283340) //this is a jump label
/*80283340 00280140*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80283344 00280144*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80283348 00280148*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8028334C 0028014C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80283350 00280150*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80283354 00280154*/ PPC::Runtime::ASM::blr();
}