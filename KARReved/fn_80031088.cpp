//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135574.hpp"
#include "fn_80135BAC.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_?loadData2.hpp"
#include "fn_CSS_updatePlayerIndicatorColorInside.hpp"
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
#include "fn_CSS_updatePlayerAButton.hpp"
#include "fn_80135B2C.hpp"



void fn_80031088(PPC::Runtime::GCContext* context)
{
/*80031088 0002DE88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8003108C 0002DE8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80031090 0002DE90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80031094 0002DE94*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80031098 0002DE98*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8003109C 0002DE9C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800310A0 0002DEA0*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x1d0);
/*800310A4 0002DEA4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800310A8 0002DEA8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800310AC 0002DEAC*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x1d0);
/*800310B0 0002DEB0*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*800310B4 0002DEB4*/ PPC::Runtime::ASM::b(.L_800310D8);
RUNTIME_PPC_JUMP_LABEL(.L_800310B8, 0x800310B8) //this is a jump label
/*800310B8 0002DEB8*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*800310BC 0002DEBC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x45);
/*800310C0 0002DEC0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r6, context->r0);
/*800310C4 0002DEC4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*800310C8 0002DEC8*/ PPC::Runtime::ASM::bne(.L_800310D4);
/*800310CC 0002DECC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*800310D0 0002DED0*/ PPC::Runtime::ASM::extsb(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800310D4, 0x800310D4) //this is a jump label
/*800310D4 0002DED4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800310D8, 0x800310D8) //this is a jump label
/*800310D8 0002DED8*/ PPC::Runtime::ASM::extsb(context->r0, context->r5);
/*800310DC 0002DEDC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800310E0 0002DEE0*/ PPC::Runtime::ASM::blt(.L_800310B8);
/*800310E4 0002DEE4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r4);
/*800310E8 0002DEE8*/ PPC::Runtime::ASM::bne(.L_800312E4);
/*800310EC 0002DEEC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800310F0, 0x800310F0) //this is a jump label
/*800310F0 0002DEF0*/ PPC::Runtime::ASM::add(context->r29, context->r30, context->r28);
/*800310F4 0002DEF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r29));
/*800310F8 0002DEF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800310FC 0002DEFC*/ PPC::Runtime::ASM::bne(.L_800312D0);
/*80031100 0002DF00*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80031104 0002DF04*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r29));
/*80031108 0002DF08*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003110C 0002DF0C*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x1d0);
/*80031110 0002DF10*/ PPC::Runtime::ASM::extsb(context->r31, context->r28);
/*80031114 0002DF14*/ PPC::Runtime::ASM::add(context->r25, context->r26, context->r31);
/*80031118 0002DF18*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r25));
/*8003111C 0002DF1C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80031120 0002DF20*/ PPC::Runtime::ASM::beq(.L_800312A0);
/*80031124 0002DF24*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80031128 0002DF28*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8003112C 0002DF2C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_80031130, 0x80031130) //this is a jump label
/*80031130 0002DF30*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x25);
/*80031134 0002DF34*/ PPC::Runtime::ASM::lbzx(context->r0, context->r26, context->r0);
/*80031138 0002DF38*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8003113C 0002DF3C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r31);
/*80031140 0002DF40*/ PPC::Runtime::ASM::bne(.L_80031160);
/*80031144 0002DF44*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*80031148 0002DF48*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8003114C 0002DF4C*/ PPC::Runtime::ASM::bl(fn_80135574);
/*80031150 0002DF50*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*80031154 0002DF54*/ PPC::Runtime::ASM::extsb(context->r4, context->r28);
/*80031158 0002DF58*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8003115C 0002DF5C*/ PPC::Runtime::ASM::bl(fn_80135BAC);
RUNTIME_PPC_JUMP_LABEL(.L_80031160, 0x80031160) //this is a jump label
/*80031160 0002DF60*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*80031164 0002DF64*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*80031168 0002DF68*/ PPC::Runtime::ASM::blt(.L_80031130);
/*8003116C 0002DF6C*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r25));
/*80031170 0002DF70*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80031174 0002DF74*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r3));
/*80031178 0002DF78*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8003117C 0002DF7C*/ PPC::Runtime::ASM::bne(.L_800311B4);
/*80031180 0002DF80*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80031184 0002DF84*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80031188 0002DF88*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r3));
/*8003118C 0002DF8C*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r0);
/*80031190 0002DF90*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*80031194 0002DF94*/ PPC::Runtime::ASM::bne(.L_800311B4);
/*80031198 0002DF98*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8003119C 0002DF9C*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800311A0 0002DFA0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800311A4 0002DFA4*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*800311A8 0002DFA8*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*800311AC 0002DFAC*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerIndicatorColorInside);
/*800311B0 0002DFB0*/ PPC::Runtime::ASM::b(.L_800311CC);
RUNTIME_PPC_JUMP_LABEL(.L_800311B4, 0x800311B4) //this is a jump label
/*800311B4 0002DFB4*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800311B8 0002DFB8*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800311BC 0002DFBC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800311C0 0002DFC0*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*800311C4 0002DFC4*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*800311C8 0002DFC8*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerIndicatorColorInside);
RUNTIME_PPC_JUMP_LABEL(.L_800311CC, 0x800311CC) //this is a jump label
/*800311CC 0002DFCC*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*800311D0 0002DFD0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800311D4 0002DFD4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800311D8 0002DFD8*/ PPC::Runtime::ASM::bl(fn_8002E108);
/*800311DC 0002DFDC*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800311E0 0002DFE0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r31);
/*800311E4 0002DFE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21d, context->r3));
/*800311E8 0002DFE8*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22d, context->r3));
/*800311EC 0002DFEC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800311F0 0002DFF0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800311F4 0002DFF4*/ PPC::Runtime::ASM::beq(.L_80031200);
/*800311F8 0002DFF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800311FC 0002DFFC*/ PPC::Runtime::ASM::bne(.L_8003121C);
RUNTIME_PPC_JUMP_LABEL(.L_80031200, 0x80031200) //this is a jump label
/*80031200 0002E000*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*80031204 0002E004*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80031208 0002E008*/ PPC::Runtime::ASM::bl(fn_80135694);
/*8003120C 0002E00C*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*80031210 0002E010*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80031214 0002E014*/ PPC::Runtime::ASM::bl(fn_80135714);
/*80031218 0002E018*/ PPC::Runtime::ASM::b(.L_80031234);
RUNTIME_PPC_JUMP_LABEL(.L_8003121C, 0x8003121C) //this is a jump label
/*8003121C 0002E01C*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*80031220 0002E020*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80031224 0002E024*/ PPC::Runtime::ASM::bl(fn_801356D4);
/*80031228 0002E028*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8003122C 0002E02C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80031230 0002E030*/ PPC::Runtime::ASM::bl(fn_80135714);
RUNTIME_PPC_JUMP_LABEL(.L_80031234, 0x80031234) //this is a jump label
/*80031234 0002E034*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80031238 0002E038*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x1d0);
/*8003123C 0002E03C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r3));
/*80031240 0002E040*/ PPC::Runtime::ASM::add(context->r25, context->r26, context->r31);
/*80031244 0002E044*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r25));
/*80031248 0002E048*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8003124C 0002E04C*/ PPC::Runtime::ASM::bne(.L_8003125C);
/*80031250 0002E050*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*80031254 0002E054*/ PPC::Runtime::ASM::bl(fn_80135674);
/*80031258 0002E058*/ PPC::Runtime::ASM::b(.L_800312A0);
RUNTIME_PPC_JUMP_LABEL(.L_8003125C, 0x8003125C) //this is a jump label
/*8003125C 0002E05C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*80031260 0002E060*/ PPC::Runtime::ASM::ble(.L_80031270);
/*80031264 0002E064*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80031268 0002E068*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8003126C 0002E06C*/ PPC::Runtime::ASM::bne(.L_80031298);
RUNTIME_PPC_JUMP_LABEL(.L_80031270, 0x80031270) //this is a jump label
/*80031270 0002E070*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r25));
/*80031274 0002E074*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80031278 0002E078*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r25));
/*8003127C 0002E07C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80031280 0002E080*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*80031284 0002E084*/ PPC::Runtime::ASM::extsb(context->r4, context->r0);
/*80031288 0002E088*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x66);
/*8003128C 0002E08C*/ PPC::Runtime::ASM::lbzx(context->r4, context->r26, context->r0);
/*80031290 0002E090*/ PPC::Runtime::ASM::bl(fn_CSS_updateMachineImage);
/*80031294 0002E094*/ PPC::Runtime::ASM::b(.L_800312A0);
RUNTIME_PPC_JUMP_LABEL(.L_80031298, 0x80031298) //this is a jump label
/*80031298 0002E098*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8003129C 0002E09C*/ PPC::Runtime::ASM::bl(fn_80135674);
RUNTIME_PPC_JUMP_LABEL(.L_800312A0, 0x800312A0) //this is a jump label
/*800312A0 0002E0A0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*800312A4 0002E0A4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800312A8 0002E0A8*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r28);
/*800312AC 0002E0AC*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*800312B0 0002E0B0*/ PPC::Runtime::ASM::beq(.L_800312C0);
/*800312B4 0002E0B4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r29));
/*800312B8 0002E0B8*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*800312BC 0002E0BC*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerAButton);
RUNTIME_PPC_JUMP_LABEL(.L_800312C0, 0x800312C0) //this is a jump label
/*800312C0 0002E0C0*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*800312C4 0002E0C4*/ PPC::Runtime::ASM::bl(fn_80135B2C);
/*800312C8 0002E0C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800312CC 0002E0CC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800312D0, 0x800312D0) //this is a jump label
/*800312D0 0002E0D0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*800312D4 0002E0D4*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*800312D8 0002E0D8*/ PPC::Runtime::ASM::blt(.L_800310F0);
/*800312DC 0002E0DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800312E0 0002E0E0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800312E4, 0x800312E4) //this is a jump label
/*800312E4 0002E0E4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800312E8 0002E0E8*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800312EC 0002E0EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800312F0 0002E0F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800312F4 0002E0F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800312F8 0002E0F8*/ PPC::Runtime::ASM::blr();
}