//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80059818.hpp"
#include "fn_80073FA4.hpp"
#include "fn_LoadDatsForCityTrial.hpp"
#include "fn_80059818.hpp"
#include "fn_80073FA4.hpp"
#include "fn_LoadDatsForCityTrial.hpp"
#include "fn_80059818.hpp"
#include "fn_80059520.hpp"
#include "fn_8013981C.hpp"
#include "fn_8013ACB0.hpp"
#include "fn_801555D8.hpp"
#include "fn_8015579C.hpp"
#include "fn_8015596C.hpp"
#include "fn_80155B1C.hpp"
#include "fn_80155CF0.hpp"
#include "fn_8015627C.hpp"
#include "fn_801564DC.hpp"
#include "fn_801568F0.hpp"
#include "fn_80156C7C.hpp"
#include "fn_80156FE0.hpp"
#include "fn_80157270.hpp"
#include "fn_80157744.hpp"
#include "fn_80157AE0.hpp"
#include "fn_8015802C.hpp"
#include "fn_8015853C.hpp"
#include "fn_801588C8.hpp"
#include "fn_80158CFC.hpp"
#include "fn_80159218.hpp"
#include "fn_801595B8.hpp"
#include "fn_80159750.hpp"
#include "fn_8016180C.hpp"
#include "fn_8016194C.hpp"
#include "fn_80162100.hpp"



void fn_8013467C(PPC::Runtime::GCContext* context)
{
/*8013467C 0013147C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80134680 00131480*/ PPC::Runtime::ASM::mflr(context->r0);
/*80134684 00131484*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80134688 00131488*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1133 @ Get_MemoryOffset_HighBit);
/*8013468C 0013148C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80134690 00131490*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80134694 00131494*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80134698 00131498*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_1133 @ Get_MemoryOffset_LowBit);
/*8013469C 0013149C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*801346A0 001314A0*/ PPC::Runtime::ASM::stb(context->r0, lbl_80558788 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*801346A4 001314A4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7E0 @ Get_MemoryOffset_SDA21);
/*801346A8 001314A8*/ PPC::Runtime::ASM::bl(fn_80059818);
/*801346AC 001314AC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*801346B0 001314B0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801346B4 001314B4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*801346B8 001314B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*801346BC 001314BC*/ PPC::Runtime::ASM::bl(fn_80073FA4);
/*801346C0 001314C0*/ PPC::Runtime::ASM::bl(fn_LoadDatsForCityTrial);
/*801346C4 001314C4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x28);
/*801346C8 001314C8*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7D8 @ Get_MemoryOffset_SDA21);
/*801346CC 001314CC*/ PPC::Runtime::ASM::bl(fn_80059818);
/*801346D0 001314D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*801346D4 001314D4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801346D8 001314D8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*801346DC 001314DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r3));
/*801346E0 001314E0*/ PPC::Runtime::ASM::bl(fn_80073FA4);
/*801346E4 001314E4*/ PPC::Runtime::ASM::bl(fn_LoadDatsForCityTrial);
/*801346E8 001314E8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa8);
/*801346EC 001314EC*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7B8 @ Get_MemoryOffset_SDA21);
/*801346F0 001314F0*/ PPC::Runtime::ASM::bl(fn_80059818);
/*801346F4 001314F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD7B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801346F8 001314F8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801346FC 001314FC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x24c);
/*80134700 00131500*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80134704 00131504*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80134708 00131508*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8013470C 0013150C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80134710 00131510*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80134714 00131514*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*80134718 00131518*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8013471C 0013151C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559A90 @ Get_MemoryOffset_HighBit);
/*80134720 00131520*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r4));
/*80134724 00131524*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559A90 @ Get_MemoryOffset_LowBit);
/*80134728 00131528*/ PPC::Runtime::ASM::li(context->r4, 0x1f0);
/*8013472C 0013152C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80134730 00131530*/ PPC::Runtime::ASM::bl(fn_8013981C);
/*80134734 00131534*/ PPC::Runtime::ASM::bl(fn_8013ACB0);
/*80134738 00131538*/ PPC::Runtime::ASM::bl(fn_801555D8);
/*8013473C 0013153C*/ PPC::Runtime::ASM::bl(fn_8015579C);
/*80134740 00131540*/ PPC::Runtime::ASM::bl(fn_8015596C);
/*80134744 00131544*/ PPC::Runtime::ASM::bl(fn_80155B1C);
/*80134748 00131548*/ PPC::Runtime::ASM::bl(fn_80155CF0);
/*8013474C 0013154C*/ PPC::Runtime::ASM::bl(fn_8015627C);
/*80134750 00131550*/ PPC::Runtime::ASM::bl(fn_801564DC);
/*80134754 00131554*/ PPC::Runtime::ASM::bl(fn_801568F0);
/*80134758 00131558*/ PPC::Runtime::ASM::bl(fn_80156C7C);
/*8013475C 0013155C*/ PPC::Runtime::ASM::bl(fn_80156FE0);
/*80134760 00131560*/ PPC::Runtime::ASM::bl(fn_80157270);
/*80134764 00131564*/ PPC::Runtime::ASM::bl(fn_80157744);
/*80134768 00131568*/ PPC::Runtime::ASM::bl(fn_80157AE0);
/*8013476C 0013156C*/ PPC::Runtime::ASM::bl(fn_8015802C);
/*80134770 00131570*/ PPC::Runtime::ASM::bl(fn_8015853C);
/*80134774 00131574*/ PPC::Runtime::ASM::bl(fn_801588C8);
/*80134778 00131578*/ PPC::Runtime::ASM::bl(fn_80158CFC);
/*8013477C 0013157C*/ PPC::Runtime::ASM::bl(fn_80159218);
/*80134780 00131580*/ PPC::Runtime::ASM::bl(fn_801595B8);
/*80134784 00131584*/ PPC::Runtime::ASM::bl(fn_80159750);
/*80134788 00131588*/ PPC::Runtime::ASM::bl(fn_8016180C);
/*8013478C 0013158C*/ PPC::Runtime::ASM::bl(fn_8016194C);
/*80134790 00131590*/ PPC::Runtime::ASM::bl(fn_80162100);
/*80134794 00131594*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80134798 00131598*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013479C 0013159C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801347A0 001315A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801347A4 001315A4*/ PPC::Runtime::ASM::blr();
}