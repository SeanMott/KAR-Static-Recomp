//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022B518.hpp"
#include "fn_80221E30.hpp"
#include "fn_80222144.hpp"
#include "fn_80236C40.hpp"
#include "fn_8022AA38.hpp"
#include "fn_8022B118.hpp"



void fn_8022A984(PPC::Runtime::GCContext* context)
{
/*8022A984 00227784*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8022A988 00227788*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022A98C 0022778C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022A990 00227790*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8022A994 00227794*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8022A998 00227798*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022A99C 0022779C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022A9A0 002277A0*/ PPC::Runtime::ASM::bl(fn_8022B518);
/*8022A9A4 002277A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022A9A8 002277A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022A9AC 002277AC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8022A9B0 002277B0*/ PPC::Runtime::ASM::bl(fn_80221E30);
/*8022A9B4 002277B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r31));
/*8022A9B8 002277B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8022A9BC 002277BC*/ PPC::Runtime::ASM::beq(.L_8022AA20);
/*8022A9C0 002277C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/* 8022A9C4 002277C4  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*8022A9C8 002277C8*/ PPC::Runtime::ASM::beq(.L_8022AA20);
/*8022A9CC 002277CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022A9D0 002277D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022A9D4 002277D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*8022A9D8 002277D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*8022A9DC 002277DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*8022A9E0 002277E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*8022A9E4 002277E4*/ PPC::Runtime::ASM::bl(fn_80222144);
/*8022A9E8 002277E8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8022A9EC 002277EC*/ PPC::Runtime::ASM::beq(.L_8022AA20);
/*8022A9F0 002277F0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8022A9F4 002277F4*/ PPC::Runtime::ASM::li(context->r4, 0x753a);
/*8022A9F8 002277F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8022A9FC 002277FC*/ PPC::Runtime::ASM::li(context->r6, 0xcb);
/*8022AA00 00227800*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*8022AA04 00227804*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8022AA08 00227808*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8022AA0C 0022780C*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*8022AA10 00227810*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022AA14 00227814*/ PPC::Runtime::ASM::bl(fn_8022AA38);
/*8022AA18 00227818*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022AA1C 0022781C*/ PPC::Runtime::ASM::bl(fn_8022B118);
RUNTIME_PPC_JUMP_LABEL(.L_8022AA20, 0x8022AA20) //this is a jump label
/*8022AA20 00227820*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022AA24 00227824*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8022AA28 00227828*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022AA2C 0022782C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8022AA30 00227830*/ PPC::Runtime::ASM::blr();
}