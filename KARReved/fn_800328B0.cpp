//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_CSS_cityTrial_colorChanger.hpp"
#include "fn_CSS_cityTrial_colorChanger.hpp"
#include "fn_CSS_playSoundFX.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_?loadData2.hpp"
#include "fn_CSS_updatePlayerIndicatorColorInside.hpp"
#include "fn_?loadData2.hpp"
#include "fn_CSS_updatePlayerIndicatorColorInside.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_CSS_updatePlayerColorIndicatorOutside.hpp"
#include "fn_CSS_updatePlayerColorIndicatorBar.hpp"
#include "fn_80135754.hpp"
#include "fn_801359B4.hpp"
#include "fn_?loadData2.hpp"
#include "fn_CSS_updatePlayerColorIndicatorOutside.hpp"
#include "fn_?loadData2.hpp"
#include "fn_CSS_updatePlayerColorIndicatorBar.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80135754.hpp"
#include "fn_?loadData2.hpp"
#include "fn_801359B4.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80135654.hpp"
#include "fn_playSoundFX_errorNoise.hpp"
#include "fn_playSoundFX_errorNoise.hpp"
#include "fn_80061690.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135864.hpp"
#include "fn_80135514.hpp"
#include "fn_80135950.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135B4C.hpp"
#include "fn_8002F588.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135574.hpp"
#include "fn_80135BAC.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_?loadData2.hpp"
#include "fn_CSS_updatePlayerIndicatorColorInside.hpp"
#include "fn_8002E108.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135694.hpp"
#include "fn_80135714.hpp"
#include "fn_801356D4.hpp"
#include "fn_80135714.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135674.hpp"
#include "fn_?loadData2.hpp"
#include "fn_CSS_updateMachineImage.hpp"
#include "fn_80135674.hpp"
#include "fn_80031684.hpp"



void fn_800328B0(PPC::Runtime::GCContext* context)
{
/*800328B0 0002F6B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800328B4 0002F6B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800328B8 0002F6B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800328BC 0002F6BC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800328C0 0002F6C0*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*800328C4 0002F6C4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800328C8 0002F6C8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800328CC 0002F6CC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r30, 24);
/*800328D0 0002F6D0*/ PPC::Runtime::ASM::lis(context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*800328D4 0002F6D4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*800328D8 0002F6D8*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x1d0);
/*800328DC 0002F6DC*/ PPC::Runtime::ASM::extsb(context->r25, context->r30);
/*800328E0 0002F6E0*/ PPC::Runtime::ASM::addi(context->r3, context->r4, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*800328E4 0002F6E4*/ PPC::Runtime::ASM::add(context->r4, context->r28, context->r25);
/*800328E8 0002F6E8*/ PPC::Runtime::ASM::addi(context->r22, context->r3, 0x8);
/*800328EC 0002F6EC*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r4));
/*800328F0 0002F6F0*/ PPC::Runtime::ASM::lwzx(context->r27, context->r22, context->r0);
/*800328F4 0002F6F4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800328F8 0002F6F8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r25, 24);
/*800328FC 0002F6FC*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x1d0);
/*80032900 0002F700*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80032904 0002F704*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r25);
/*80032908 0002F708*/ PPC::Runtime::ASM::lbz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*8003290C 0002F70C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r22, context->r0);
/*80032910 0002F710*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 20, 21);
/*80032914 0002F714*/ PPC::Runtime::ASM::beq(.L_80032AE8);
/*80032918 0002F718*/ PPC::Runtime::ASM::extsb(context->r24, context->r29);
/*8003291C 0002F71C*/ PPC::Runtime::ASM::add(context->r3, context->r26, context->r24);
/*80032920 0002F720*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r3));
/*80032924 0002F724*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80032928 0002F728*/ PPC::Runtime::ASM::bne(.L_80032934);
/*8003292C 0002F72C*/ PPC::Runtime::ASM::cmpw(context->r24, context->r25);
/*80032930 0002F730*/ PPC::Runtime::ASM::beq(.L_80032940);
RUNTIME_PPC_JUMP_LABEL(.L_80032934, 0x80032934) //this is a jump label
/*80032934 0002F734*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80032938 0002F738*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8003293C 0002F73C*/ PPC::Runtime::ASM::bne(.L_80032ADC);
RUNTIME_PPC_JUMP_LABEL(.L_80032940, 0x80032940) //this is a jump label
/*80032940 0002F740*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80032944 0002F744*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80032948 0002F748*/ PPC::Runtime::ASM::bne(.L_80032954);
/*8003294C 0002F74C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80032950 0002F750*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80032954, 0x80032954) //this is a jump label
/*80032954 0002F754*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 21, 21);
/*80032958 0002F758*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8003295C 0002F75C*/ PPC::Runtime::ASM::beq(.L_80032970);
/*80032960 0002F760*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032964 0002F764*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80032968 0002F768*/ PPC::Runtime::ASM::bl(fn_CSS_cityTrial_colorChanger);
/*8003296C 0002F76C*/ PPC::Runtime::ASM::b(.L_80032984);
RUNTIME_PPC_JUMP_LABEL(.L_80032970, 0x80032970) //this is a jump label
/*80032970 0002F770*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 20, 20);
/*80032974 0002F774*/ PPC::Runtime::ASM::beq(.L_80032984);
/*80032978 0002F778*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8003297C 0002F77C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80032980 0002F780*/ PPC::Runtime::ASM::bl(fn_CSS_cityTrial_colorChanger);
RUNTIME_PPC_JUMP_LABEL(.L_80032984, 0x80032984) //this is a jump label
/*80032984 0002F784*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80032988 0002F788*/ PPC::Runtime::ASM::beq(.L_80032AD4);
/*8003298C 0002F78C*/ PPC::Runtime::ASM::bl(fn_CSS_playSoundFX);
/*80032990 0002F790*/ PPC::Runtime::ASM::add(context->r26, context->r26, context->r24);
/*80032994 0002F794*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r26));
/*80032998 0002F798*/ PPC::Runtime::ASM::lbz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r26));
/*8003299C 0002F79C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800329A0 0002F7A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r3));
/*800329A4 0002F7A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800329A8 0002F7A8*/ PPC::Runtime::ASM::bne(.L_800329EC);
/*800329AC 0002F7AC*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*800329B0 0002F7B0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800329B4 0002F7B4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r3));
/*800329B8 0002F7B8*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r0);
/*800329BC 0002F7BC*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*800329C0 0002F7C0*/ PPC::Runtime::ASM::bne(.L_800329EC);
/*800329C4 0002F7C4*/ PPC::Runtime::ASM::extsb(context->r0, context->r23);
/*800329C8 0002F7C8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800329CC 0002F7CC*/ PPC::Runtime::ASM::bne(.L_800329EC);
/*800329D0 0002F7D0*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800329D4 0002F7D4*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800329D8 0002F7D8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800329DC 0002F7DC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800329E0 0002F7E0*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*800329E4 0002F7E4*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerIndicatorColorInside);
/*800329E8 0002F7E8*/ PPC::Runtime::ASM::b(.L_80032A04);
RUNTIME_PPC_JUMP_LABEL(.L_800329EC, 0x800329EC) //this is a jump label
/*800329EC 0002F7EC*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*800329F0 0002F7F0*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800329F4 0002F7F4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800329F8 0002F7F8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800329FC 0002F7FC*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*80032A00 0002F800*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerIndicatorColorInside);
RUNTIME_PPC_JUMP_LABEL(.L_80032A04, 0x80032A04) //this is a jump label
/*80032A04 0002F804*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r26));
/*80032A08 0002F808*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80032A0C 0002F80C*/ PPC::Runtime::ASM::addi(context->r23, context->r3, 0x1d0);
/*80032A10 0002F810*/ PPC::Runtime::ASM::add(context->r3, context->r23, context->r24);
/*80032A14 0002F814*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r3));
/*80032A18 0002F818*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80032A1C 0002F81C*/ PPC::Runtime::ASM::bne(.L_80032A60);
/*80032A20 0002F820*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032A24 0002F824*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80032A28 0002F828*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerColorIndicatorOutside);
/*80032A2C 0002F82C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032A30 0002F830*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*80032A34 0002F834*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerColorIndicatorBar);
/*80032A38 0002F838*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032A3C 0002F83C*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*80032A40 0002F840*/ PPC::Runtime::ASM::bl(fn_80135754);
/*80032A44 0002F844*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*80032A48 0002F848*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80032A4C 0002F84C*/ PPC::Runtime::ASM::beq(.L_80032AE0);
/*80032A50 0002F850*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032A54 0002F854*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80032A58 0002F858*/ PPC::Runtime::ASM::bl(fn_801359B4);
/*80032A5C 0002F85C*/ PPC::Runtime::ASM::b(.L_80032AE0);
RUNTIME_PPC_JUMP_LABEL(.L_80032A60, 0x80032A60) //this is a jump label
/*80032A60 0002F860*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80032A64 0002F864*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80032A68 0002F868*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80032A6C 0002F86C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032A70 0002F870*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerColorIndicatorOutside);
/*80032A74 0002F874*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80032A78 0002F878*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80032A7C 0002F87C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80032A80 0002F880*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032A84 0002F884*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerColorIndicatorBar);
/*80032A88 0002F888*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80032A8C 0002F88C*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80032A90 0002F890*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80032A94 0002F894*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032A98 0002F898*/ PPC::Runtime::ASM::bl(fn_80135754);
/*80032A9C 0002F89C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*80032AA0 0002F8A0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80032AA4 0002F8A4*/ PPC::Runtime::ASM::beq(.L_80032ABC);
/*80032AA8 0002F8A8*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80032AAC 0002F8AC*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80032AB0 0002F8B0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80032AB4 0002F8B4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032AB8 0002F8B8*/ PPC::Runtime::ASM::bl(fn_801359B4);
RUNTIME_PPC_JUMP_LABEL(.L_80032ABC, 0x80032ABC) //this is a jump label
/*80032ABC 0002F8BC*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80032AC0 0002F8C0*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80032AC4 0002F8C4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80032AC8 0002F8C8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80032ACC 0002F8CC*/ PPC::Runtime::ASM::bl(fn_80135654);
/*80032AD0 0002F8D0*/ PPC::Runtime::ASM::b(.L_80032AE0);
RUNTIME_PPC_JUMP_LABEL(.L_80032AD4, 0x80032AD4) //this is a jump label
/*80032AD4 0002F8D4*/ PPC::Runtime::ASM::bl(fn_playSoundFX_errorNoise);
/*80032AD8 0002F8D8*/ PPC::Runtime::ASM::b(.L_80032AE0);
RUNTIME_PPC_JUMP_LABEL(.L_80032ADC, 0x80032ADC) //this is a jump label
/*80032ADC 0002F8DC*/ PPC::Runtime::ASM::bl(fn_playSoundFX_errorNoise);
RUNTIME_PPC_JUMP_LABEL(.L_80032AE0, 0x80032AE0) //this is a jump label
/*80032AE0 0002F8E0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80032AE4 0002F8E4*/ PPC::Runtime::ASM::b(.L_80032AEC);
RUNTIME_PPC_JUMP_LABEL(.L_80032AE8, 0x80032AE8) //this is a jump label
/*80032AE8 0002F8E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80032AEC, 0x80032AEC) //this is a jump label
/*80032AEC 0002F8EC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80032AF0 0002F8F0*/ PPC::Runtime::ASM::beq(.L_80032AFC);
/*80032AF4 0002F8F4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80032AF8 0002F8F8*/ PPC::Runtime::ASM::b(.L_80032D1C);
RUNTIME_PPC_JUMP_LABEL(.L_80032AFC, 0x80032AFC) //this is a jump label
/*80032AFC 0002F8FC*/ PPC::Runtime::ASM::andi.(context->r0, context->r27, 0x1360);
/*80032B00 0002F900*/ PPC::Runtime::ASM::beq(.L_80032D00);
/*80032B04 0002F904*/ PPC::Runtime::ASM::bl(fn_80061690);
/*80032B08 0002F908*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80032B0C 0002F90C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r25);
/*80032B10 0002F910*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f1, context->r3));
/*80032B14 0002F914*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80032B18 0002F918*/ PPC::Runtime::ASM::bne(.L_80032B38);
/*80032B1C 0002F91C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80032B20 0002F920*/ PPC::Runtime::ASM::bl(fn_80135864);
/*80032B24 0002F924*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80032B28 0002F928*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80032B2C 0002F92C*/ PPC::Runtime::ASM::bl(fn_80135514);
/*80032B30 0002F930*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80032B34 0002F934*/ PPC::Runtime::ASM::bl(fn_80135950);
RUNTIME_PPC_JUMP_LABEL(.L_80032B38, 0x80032B38) //this is a jump label
/*80032B38 0002F938*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80032B3C 0002F93C*/ PPC::Runtime::ASM::add(context->r22, context->r3, context->r25);
/*80032B40 0002F940*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f1, context->r22));
/*80032B44 0002F944*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80032B48 0002F948*/ PPC::Runtime::ASM::beq(.L_80032B64);
/*80032B4C 0002F94C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80032B50 0002F950*/ PPC::Runtime::ASM::bl(fn_80135B4C);
/*80032B54 0002F954*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80032B58 0002F958*/ PPC::Runtime::ASM::bl(fn_8002F588);
/*80032B5C 0002F95C*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80032B60 0002F960*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f1, context->r22));
RUNTIME_PPC_JUMP_LABEL(.L_80032B64, 0x80032B64) //this is a jump label
/*80032B64 0002F964*/ PPC::Runtime::ASM::extsb(context->r24, context->r31);
/*80032B68 0002F968*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r24);
/*80032B6C 0002F96C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r3));
/*80032B70 0002F970*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80032B74 0002F974*/ PPC::Runtime::ASM::bne(.L_80032CE0);
/*80032B78 0002F978*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80032B7C 0002F97C*/ PPC::Runtime::ASM::addi(context->r22, context->r3, 0x1d0);
/*80032B80 0002F980*/ PPC::Runtime::ASM::add(context->r3, context->r22, context->r24);
/*80032B84 0002F984*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r3));
/*80032B88 0002F988*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80032B8C 0002F98C*/ PPC::Runtime::ASM::beq(.L_80032CE0);
/*80032B90 0002F990*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80032B94 0002F994*/ PPC::Runtime::ASM::mr(context->r25, context->r24);
/*80032B98 0002F998*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r3));
/*80032B9C 0002F99C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80032BA0, 0x80032BA0) //this is a jump label
/*80032BA0 0002F9A0*/ PPC::Runtime::ASM::addi(context->r0, context->r26, 0x25);
/*80032BA4 0002F9A4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r22, context->r0);
/*80032BA8 0002F9A8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80032BAC 0002F9AC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r25);
/*80032BB0 0002F9B0*/ PPC::Runtime::ASM::bne(.L_80032BD0);
/*80032BB4 0002F9B4*/ PPC::Runtime::ASM::extsb(context->r3, context->r26);
/*80032BB8 0002F9B8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80032BBC 0002F9BC*/ PPC::Runtime::ASM::bl(fn_80135574);
/*80032BC0 0002F9C0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80032BC4 0002F9C4*/ PPC::Runtime::ASM::extsb(context->r3, context->r26);
/*80032BC8 0002F9C8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80032BCC 0002F9CC*/ PPC::Runtime::ASM::bl(fn_80135BAC);
RUNTIME_PPC_JUMP_LABEL(.L_80032BD0, 0x80032BD0) //this is a jump label
/*80032BD0 0002F9D0*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*80032BD4 0002F9D4*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x4);
/*80032BD8 0002F9D8*/ PPC::Runtime::ASM::blt(.L_80032BA0);
/*80032BDC 0002F9DC*/ PPC::Runtime::ASM::add(context->r3, context->r22, context->r24);
/*80032BE0 0002F9E0*/ PPC::Runtime::ASM::lbz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r3));
/*80032BE4 0002F9E4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80032BE8 0002F9E8*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80032BEC 0002F9EC*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80032BF0 0002F9F0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80032BF4 0002F9F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80032BF8 0002F9F8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80032BFC 0002F9FC*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerIndicatorColorInside);
/*80032C00 0002FA00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80032C04 0002FA04*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80032C08 0002FA08*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80032C0C 0002FA0C*/ PPC::Runtime::ASM::bl(fn_8002E108);
/*80032C10 0002FA10*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80032C14 0002FA14*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1d0);
/*80032C18 0002FA18*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r24);
/*80032C1C 0002FA1C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r3));
/*80032C20 0002FA20*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r3));
/*80032C24 0002FA24*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80032C28 0002FA28*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80032C2C 0002FA2C*/ PPC::Runtime::ASM::beq(.L_80032C38);
/*80032C30 0002FA30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80032C34 0002FA34*/ PPC::Runtime::ASM::bne(.L_80032C54);
RUNTIME_PPC_JUMP_LABEL(.L_80032C38, 0x80032C38) //this is a jump label
/*80032C38 0002FA38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80032C3C 0002FA3C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80032C40 0002FA40*/ PPC::Runtime::ASM::bl(fn_80135694);
/*80032C44 0002FA44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80032C48 0002FA48*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80032C4C 0002FA4C*/ PPC::Runtime::ASM::bl(fn_80135714);
/*80032C50 0002FA50*/ PPC::Runtime::ASM::b(.L_80032C6C);
RUNTIME_PPC_JUMP_LABEL(.L_80032C54, 0x80032C54) //this is a jump label
/*80032C54 0002FA54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80032C58 0002FA58*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80032C5C 0002FA5C*/ PPC::Runtime::ASM::bl(fn_801356D4);
/*80032C60 0002FA60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80032C64 0002FA64*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80032C68 0002FA68*/ PPC::Runtime::ASM::bl(fn_80135714);
RUNTIME_PPC_JUMP_LABEL(.L_80032C6C, 0x80032C6C) //this is a jump label
/*80032C6C 0002FA6C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80032C70 0002FA70*/ PPC::Runtime::ASM::addi(context->r22, context->r3, 0x1d0);
/*80032C74 0002FA74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r3));
/*80032C78 0002FA78*/ PPC::Runtime::ASM::add(context->r3, context->r22, context->r24);
/*80032C7C 0002FA7C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r3));
/*80032C80 0002FA80*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80032C84 0002FA84*/ PPC::Runtime::ASM::bne(.L_80032C94);
/*80032C88 0002FA88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80032C8C 0002FA8C*/ PPC::Runtime::ASM::bl(fn_80135674);
/*80032C90 0002FA90*/ PPC::Runtime::ASM::b(.L_80032CE0);
RUNTIME_PPC_JUMP_LABEL(.L_80032C94, 0x80032C94) //this is a jump label
/*80032C94 0002FA94*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*80032C98 0002FA98*/ PPC::Runtime::ASM::ble(.L_80032CA8);
/*80032C9C 0002FA9C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80032CA0 0002FAA0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80032CA4 0002FAA4*/ PPC::Runtime::ASM::bne(.L_80032CD8);
RUNTIME_PPC_JUMP_LABEL(.L_80032CA8, 0x80032CA8) //this is a jump label
/*80032CA8 0002FAA8*/ PPC::Runtime::ASM::add(context->r3, context->r22, context->r24);
/*80032CAC 0002FAAC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r3));
/*80032CB0 0002FAB0*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80032CB4 0002FAB4*/ PPC::Runtime::ASM::add(context->r4, context->r22, context->r24);
/*80032CB8 0002FAB8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80032CBC 0002FABC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r4));
/*80032CC0 0002FAC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80032CC4 0002FAC4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80032CC8 0002FAC8*/ PPC::Runtime::ASM::add(context->r4, context->r22, context->r0);
/*80032CCC 0002FACC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x66, context->r4));
/*80032CD0 0002FAD0*/ PPC::Runtime::ASM::bl(fn_CSS_updateMachineImage);
/*80032CD4 0002FAD4*/ PPC::Runtime::ASM::b(.L_80032CE0);
RUNTIME_PPC_JUMP_LABEL(.L_80032CD8, 0x80032CD8) //this is a jump label
/*80032CD8 0002FAD8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80032CDC 0002FADC*/ PPC::Runtime::ASM::bl(fn_80135674);
RUNTIME_PPC_JUMP_LABEL(.L_80032CE0, 0x80032CE0) //this is a jump label
/*80032CE0 0002FAE0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80032CE4 0002FAE4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80032CE8 0002FAE8*/ PPC::Runtime::ASM::slw(context->r0, context->r3, context->r0);
/*80032CEC 0002FAEC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r28));
/*80032CF0 0002FAF0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80032CF4 0002FAF4*/ PPC::Runtime::ASM::andc(context->r0, context->r4, context->r0);
/*80032CF8 0002FAF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r28));
/*80032CFC 0002FAFC*/ PPC::Runtime::ASM::b(.L_80032D1C);
RUNTIME_PPC_JUMP_LABEL(.L_80032D00, 0x80032D00) //this is a jump label
/*80032D00 0002FB00*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80032D04 0002FB04*/ PPC::Runtime::ASM::bl(fn_80031684);
/*80032D08 0002FB08*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80032D0C 0002FB0C*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80032D10 0002FB10*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*80032D14 0002FB14*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*80032D18 0002FB18*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80032D1C, 0x80032D1C) //this is a jump label
/*80032D1C 0002FB1C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80032D20 0002FB20*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*80032D24 0002FB24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80032D28 0002FB28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80032D2C 0002FB2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80032D30 0002FB30*/ PPC::Runtime::ASM::blr();
}