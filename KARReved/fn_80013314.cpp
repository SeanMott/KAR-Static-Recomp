//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_8003D5F0.hpp"
#include "fn_8003D5F0.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_8000AF94.hpp"
#include "fn_8000AF94.hpp"
#include "fn_8000AF5C.hpp"



void fn_80013314(PPC::Runtime::GCContext* context)
{
/*80013314 00010114*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80013318 00010118*/ PPC::Runtime::ASM::mflr(context->r0);
/*8001331C 0001011C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80013320 00010120*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80013324 00010124*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80013328 00010128*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8001332C 0001012C*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*80013330 00010130*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80013334 00010134*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80013338 00010138*/ PPC::Runtime::ASM::beq(.L_8001334C);
/*8001333C 0001013C*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*80013340 00010140*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80013344 00010144*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80013348 00010148*/ PPC::Runtime::ASM::bne(.L_800134C0);
RUNTIME_PPC_JUMP_LABEL(.L_8001334C, 0x8001334C) //this is a jump label
/*8001334C 0001014C*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*80013350 00010150*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80013354 00010154*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80013358 00010158*/ PPC::Runtime::ASM::beq(.L_800134C0);
/*8001335C 0001015C*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*80013360 00010160*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80013364 00010164*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80013368 00010168*/ PPC::Runtime::ASM::bne(.L_80013370);
/*8001336C 0001016C*/ PPC::Runtime::ASM::b(.L_800134C0);
RUNTIME_PPC_JUMP_LABEL(.L_80013370, 0x80013370) //this is a jump label
/*80013370 00010170*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*80013374 00010174*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80013378 00010178*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8001337C 0001017C*/ PPC::Runtime::ASM::bne(.L_8001339C);
/*80013380 00010180*/ PPC::Runtime::ASM::bl(fn_8000AF94);
/*80013384 00010184*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80013388 00010188*/ PPC::Runtime::ASM::beq(.L_8001339C);
/*8001338C 0001018C*/ PPC::Runtime::ASM::bl(fn_8000AF94);
/*80013390 00010190*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80013394 00010194*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80013398 00010198*/ PPC::Runtime::ASM::bne(.L_800134C0);
RUNTIME_PPC_JUMP_LABEL(.L_8001339C, 0x8001339C) //this is a jump label
/*8001339C 0001019C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35c, context->r31));
/*800133A0 000101A0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*800133A4 000101A4*/ PPC::Runtime::ASM::bne(.L_80013410);
/*800133A8 000101A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x354, context->r31));
/*800133AC 000101AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*800133B0 000101B0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x356, context->r31));
/*800133B4 000101B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa9a, context->r31));
/*800133B8 000101B8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r31));
/*800133BC 000101BC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa9c, context->r31));
/*800133C0 000101C0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r31));
/*800133C4 000101C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*800133C8 000101C8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 31, 27, 27);
/*800133CC 000101CC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*800133D0 000101D0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r31));
/*800133D4 000101D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*800133D8 000101D8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 30, 28, 28);
/*800133DC 000101DC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*800133E0 000101E0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r31));
/*800133E4 000101E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*800133E8 000101E8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 27, 29, 30);
/*800133EC 000101EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*800133F0 000101F0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r31));
/*800133F4 000101F4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800133F8 000101F8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 25, 25);
/*800133FC 000101FC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*80013400 00010200*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35a, context->r31));
/*80013404 00010204*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*80013408 00010208*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 31, 29, 30);
/*8001340C 0001020C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80013410, 0x80013410) //this is a jump label
/*80013410 00010210*/ PPC::Runtime::ASM::bl(fn_8000AF5C);
/*80013414 00010214*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80013418 00010218*/ PPC::Runtime::ASM::beq(.L_800134C0);
/*8001341C 0001021C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80013420 00010220*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80013424 00010224*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac8, context->r31));
/*80013428 00010228*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*8001342C 0001022C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80013430 00010230*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80013434 00010234*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xace, context->r31));
/*80013438 00010238*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*8001343C 0001023C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad0, context->r31));
/*80013440 00010240*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad1, context->r31));
/*80013444 00010244*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaf8, context->r31));
/*80013448 00010248*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xafe, context->r31));
/*8001344C 0001024C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb00, context->r31));
/*80013450 00010250*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb01, context->r31));
/*80013454 00010254*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb28, context->r31));
/*80013458 00010258*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb2e, context->r31));
/*8001345C 0001025C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb30, context->r31));
/*80013460 00010260*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb31, context->r31));
/*80013464 00010264*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
/*80013468 00010268*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb5e, context->r31));
/*8001346C 0001026C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r31));
/*80013470 00010270*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb61, context->r31));
/*80013474 00010274*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa95, context->r31));
/*80013478 00010278*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*8001347C 0001027C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa9a, context->r31));
/*80013480 00010280*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa9c, context->r31));
/*80013484 00010284*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*80013488 00010288*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 4, 27, 27);
/*8001348C 0001028C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*80013490 00010290*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*80013494 00010294*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 3, 28, 28);
/*80013498 00010298*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8001349C 0001029C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*800134A0 000102A0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 1, 29, 30);
/*800134A4 000102A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*800134A8 000102A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800134AC 000102AC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 6, 25, 25);
/*800134B0 000102B0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800134B4 000102B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800134B8 000102B8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 1, 29, 30);
/*800134BC 000102BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800134C0, 0x800134C0) //this is a jump label
/*800134C0 000102C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800134C4 000102C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800134C8 000102C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800134CC 000102CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800134D0 000102D0*/ PPC::Runtime::ASM::blr();
}