//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8003F670.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmLoadData.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000FCB0.hpp"
#include "fn_menu_cityTrial_checkMode.hpp"



void fn_800404C4(PPC::Runtime::GCContext* context)
{
/*800404C4 0003D2C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800404C8 0003D2C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800404CC 0003D2CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800404D0 0003D2D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800404D4 0003D2D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800404D8 0003D2D8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800404DC 0003D2DC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800404E0 0003D2E0*/ PPC::Runtime::ASM::bl(fn_8003F670);
/*800404E4 0003D2E4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800404E8 0003D2E8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800404EC 0003D2EC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800404F0 0003D2F0*/ PPC::Runtime::ASM::bl(fn_gmLoadData);
/*800404F4 0003D2F4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800404F8 0003D2F8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800404FC 0003D2FC*/ PPC::Runtime::ASM::bl(fn_8000FCB0);
/*80040500 0003D300*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ad, context->r30));
/*80040504 0003D304*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80040508 0003D308*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8004050C 0003D30C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80040510 0003D310*/ PPC::Runtime::ASM::extsb(context->r3, context->r4);
/*80040514 0003D314*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x6);
/*80040518 0003D318*/ PPC::Runtime::ASM::lbzx(context->r3, context->r28, context->r3);
/*8004051C 0003D31C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*80040520 0003D320*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ad, context->r30));
/*80040524 0003D324*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80040528 0003D328*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x6);
/*8004052C 0003D32C*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r3);
/*80040530 0003D330*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*80040534 0003D334*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa97, context->r31));
/*80040538 0003D338*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa98, context->r31));
/*8004053C 0003D33C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa9a, context->r31));
/*80040540 0003D340*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ad, context->r30));
/*80040544 0003D344*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*80040548 0003D348*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*8004054C 0003D34C*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x6);
/*80040550 0003D350*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*80040554 0003D354*/ PPC::Runtime::ASM::lbzx(context->r4, context->r28, context->r4);
/*80040558 0003D358*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 29, 27, 27);
/*8004055C 0003D35C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*80040560 0003D360*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ad, context->r30));
/*80040564 0003D364*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*80040568 0003D368*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*8004056C 0003D36C*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x6);
/*80040570 0003D370*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*80040574 0003D374*/ PPC::Runtime::ASM::lbzx(context->r4, context->r28, context->r4);
/*80040578 0003D378*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 29, 28, 28);
/*8004057C 0003D37C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*80040580 0003D380*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*80040584 0003D384*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r5, 1, 29, 30);
/*80040588 0003D388*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8004058C 0003D38C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ad, context->r30));
/*80040590 0003D390*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*80040594 0003D394*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80040598 0003D398*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x6);
/*8004059C 0003D39C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800405A0 0003D3A0*/ PPC::Runtime::ASM::lbzx(context->r4, context->r28, context->r4);
/*800405A4 0003D3A4*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 27, 31, 31);
/*800405A8 0003D3A8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*800405AC 0003D3AC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405B0 0003D3B0*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 6, 25, 25);
/*800405B4 0003D3B4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405B8 0003D3B8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405BC 0003D3BC*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 5, 26, 26);
/*800405C0 0003D3C0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405C4 0003D3C4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405C8 0003D3C8*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r5, 4, 27, 27);
/*800405CC 0003D3CC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405D0 0003D3D0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405D4 0003D3D4*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r5, 3, 28, 28);
/*800405D8 0003D3D8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405DC 0003D3DC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405E0 0003D3E0*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 1, 29, 30);
/*800405E4 0003D3E4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*800405E8 0003D3E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa7, context->r31));
/*800405EC 0003D3EC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 4, 27, 27);
/*800405F0 0003D3F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa7, context->r31));
/*800405F4 0003D3F4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa7, context->r31));
/*800405F8 0003D3F8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 3, 28, 28);
/*800405FC 0003D3FC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa7, context->r31));
/*80040600 0003D400*/ PPC::Runtime::ASM::bl(fn_menu_cityTrial_checkMode);
/*80040604 0003D404*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80040608 0003D408*/ PPC::Runtime::ASM::bne(.L_8004061C);
/*8004060C 0003D40C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r29));
/*80040610 0003D410*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*80040614 0003D414*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 27, 29, 30);
/*80040618 0003D418*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8004061C, 0x8004061C) //this is a jump label
/*8004061C 0003D41C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80040620 0003D420*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80040624 0003D424*/ PPC::Runtime::ASM::bne(.L_80040640);
/*80040628 0003D428*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5ad, context->r30));
/*8004062C 0003D42C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80040630 0003D430*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x6);
/*80040634 0003D434*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*80040638 0003D438*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*8004063C 0003D43C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa9c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80040640, 0x80040640) //this is a jump label
/*80040640 0003D440*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80040644 0003D444*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80040648 0003D448*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8004064C 0003D44C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80040650 0003D450*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80040654 0003D454*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80040658 0003D458*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8004065C 0003D45C*/ PPC::Runtime::ASM::blr();
}