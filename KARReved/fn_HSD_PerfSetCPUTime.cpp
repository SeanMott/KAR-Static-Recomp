//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSGetTime.hpp"
#include "fn___cvt_sll_flt.hpp"



void fn_HSD_PerfSetCPUTime(PPC::Runtime::GCContext* context)
{
/*8041BA50 00418850*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041BA54 00418854*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041BA58 00418858*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041BA5C 0041885C*/ PPC::Runtime::ASM::bl(OSGetTime);
/*8041BA60 00418860*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE2F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041BA64 00418864*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE2F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041BA68 00418868*/ PPC::Runtime::ASM::subfc(context->r4, context->r5, context->r4);
/*8041BA6C 0041886C*/ PPC::Runtime::ASM::subfe(context->r3, context->r0, context->r3);
/*8041BA70 00418870*/ PPC::Runtime::ASM::bl(fn___cvt_sll_flt);
/*8041BA74 00418874*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*8041BA78 00418878*/ PPC::Runtime::ASM::lis(context->r4, 0x8889);
/*8041BA7C 0041887C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*8041BA80 00418880*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8041BA84 00418884*/ PPC::Runtime::ASM::subi(context->r6, context->r4, 0x7777);
/*8041BA88 00418888*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041BA8C 0041888C*/ PPC::Runtime::ASM::srwi(context->r4, context->r5, 2);
/*8041BA90 00418890*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5D38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041BA94 00418894*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r6, context->r4);
/*8041BA98 00418898*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504418 @ Get_MemoryOffset_HighBit);
/*8041BA9C 0041889C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*8041BAA0 004188A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041BAA4 004188A4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041BAA8 004188A8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8041BAAC 004188AC*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*8041BAB0 004188B0*/ PPC::Runtime::ASM::stfs(context->f0, lbl_80504418 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8041BAB4 004188B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041BAB8 004188B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041BABC 004188BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041BAC0 004188C0*/ PPC::Runtime::ASM::blr();
}