//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80131928.hpp"
#include "fn_80170818.hpp"
#include "fn_80170A5C.hpp"
#include "fn_80170CA0.hpp"
#include "fn_80170EE4.hpp"
#include "fn_80171158.hpp"
#include "fn_80171DD4.hpp"
#include "fn_80172198.hpp"
#include "fn_801728C8.hpp"
#include "fn_80172BF8.hpp"
#include "fn_80172F68.hpp"
#include "fn_80173328.hpp"
#include "fn_80174228.hpp"
#include "fn_8017541C.hpp"
#include "fn_80176854.hpp"
#include "fn_80176C84.hpp"
#include "fn_80177050.hpp"
#include "fn_801773E0.hpp"
#include "fn_801777FC.hpp"
#include "fn_80177D6C.hpp"
#include "fn_8013B6F0.hpp"
#include "fn_80161C08.hpp"
#include "fn_800724EC.hpp"
#include "fn_80236284.hpp"



void fn_80138204(PPC::Runtime::GCContext* context)
{
/*80138204 00135004*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80138208 00135008*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013820C 0013500C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80138210 00135010*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80138214 00135014*/ PPC::Runtime::ASM::bl(fn_80131928);
/*80138218 00135018*/ PPC::Runtime::ASM::bl(fn_80170818);
/*8013821C 0013501C*/ PPC::Runtime::ASM::bl(fn_80170A5C);
/*80138220 00135020*/ PPC::Runtime::ASM::bl(fn_80170CA0);
/*80138224 00135024*/ PPC::Runtime::ASM::bl(fn_80170EE4);
/*80138228 00135028*/ PPC::Runtime::ASM::bl(fn_80171158);
/*8013822C 0013502C*/ PPC::Runtime::ASM::bl(fn_80171DD4);
/*80138230 00135030*/ PPC::Runtime::ASM::bl(fn_80172198);
/*80138234 00135034*/ PPC::Runtime::ASM::bl(fn_801728C8);
/*80138238 00135038*/ PPC::Runtime::ASM::bl(fn_80172BF8);
/*8013823C 0013503C*/ PPC::Runtime::ASM::bl(fn_80172F68);
/*80138240 00135040*/ PPC::Runtime::ASM::bl(fn_80173328);
/*80138244 00135044*/ PPC::Runtime::ASM::bl(fn_80174228);
/*80138248 00135048*/ PPC::Runtime::ASM::bl(fn_8017541C);
/*8013824C 0013504C*/ PPC::Runtime::ASM::bl(fn_80176854);
/*80138250 00135050*/ PPC::Runtime::ASM::bl(fn_80176C84);
/*80138254 00135054*/ PPC::Runtime::ASM::bl(fn_80177050);
/*80138258 00135058*/ PPC::Runtime::ASM::bl(fn_801773E0);
/*8013825C 0013505C*/ PPC::Runtime::ASM::bl(fn_801777FC);
/*80138260 00135060*/ PPC::Runtime::ASM::bl(fn_80177D6C);
/*80138264 00135064*/ PPC::Runtime::ASM::bl(fn_8013B6F0);
/*80138268 00135068*/ PPC::Runtime::ASM::bl(fn_80161C08);
/*8013826C 0013506C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80138270 00135070*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*80138274 00135074*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80138278 00135078*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013827C 0013507C*/ PPC::Runtime::ASM::beq(.L_8013828C);
/*80138280 00135080*/ PPC::Runtime::ASM::bl(fn_800724EC);
/*80138284 00135084*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80138288 00135088*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8013828C, 0x8013828C) //this is a jump label
/*8013828C 0013508C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80138290 00135090*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80138294 00135094*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*80138298 00135098*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8013829C 0013509C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801382A0 001350A0*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r5);
/*801382A4 001350A4*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r5);
/*801382A8 001350A8*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*801382AC 001350AC*/ PPC::Runtime::ASM::beq(.L_801382C0);
/*801382B0 001350B0*/ PPC::Runtime::ASM::bl(fn_80236284);
/*801382B4 001350B4*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801382B8 001350B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*801382BC 001350BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801382C0, 0x801382C0) //this is a jump label
/*801382C0 001350C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801382C4 001350C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801382C8 001350C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801382CC 001350CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801382D0 001350D0*/ PPC::Runtime::ASM::blr();
}