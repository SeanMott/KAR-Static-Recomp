//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CF84.hpp"
#include "fn_801C8660.hpp"
#include "fn_8018D284.hpp"



void fn_802522D0(PPC::Runtime::GCContext* context)
{
/*802522D0 0024F0D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802522D4 0024F0D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802522D8 0024F0D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802522DC 0024F0DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802522E0 0024F0E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802522E4 0024F0E4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802522E8 0024F0E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802522EC 0024F0EC*/ PPC::Runtime::ASM::bl(fn_8018CF84);
/*802522F0 0024F0F0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802522F4 0024F0F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802522F8 0024F0F8*/ PPC::Runtime::ASM::b(.L_80252314);
RUNTIME_PPC_JUMP_LABEL(.L_802522FC, 0x802522FC) //this is a jump label
/*802522FC 0024F0FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80252300 0024F100*/ PPC::Runtime::ASM::bl(fn_801C8660);
/*80252304 0024F104*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80252308 0024F108*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r30));
/*8025230C 0024F10C*/ PPC::Runtime::ASM::bl(fn_8018D284);
/*80252310 0024F110*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80252314, 0x80252314) //this is a jump label
/*80252314 0024F114*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80252318 0024F118*/ PPC::Runtime::ASM::bne(.L_802522FC);
/*8025231C 0024F11C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80252320 0024F120*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80252324 0024F124*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80252328 0024F128*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025232C 0024F12C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80252330 0024F130*/ PPC::Runtime::ASM::blr();
}