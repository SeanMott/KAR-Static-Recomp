//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028B050(PPC::Runtime::GCContext* context)
{
/*8028B050 00287E50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028B054 00287E54*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028B058 00287E58*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028B05C 00287E5C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8028B060 00287E60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028B064 00287E64*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028B068 00287E68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028B06C 00287E6C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8028B070 00287E70*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8028B074 00287E74*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*8028B078 00287E78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8028B07C 00287E7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8028B080 00287E80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8028B084 00287E84*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8028B088 00287E88*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8028B08C 00287E8C*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8028B090 00287E90*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*8028B094 00287E94*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8028B098 00287E98*/ PPC::Runtime::ASM::bl(fn_GXGetTexBufferSize);
/*8028B09C 00287E9C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1f);
/*8028B0A0 00287EA0*/ PPC::Runtime::ASM::clrrwi(context->r3, context->r0, 5);
/*8028B0A4 00287EA4*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*8028B0A8 00287EA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8028B0AC 00287EAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8028B0B0 00287EB0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDBF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028B0B4 00287EB4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8028B0B8 00287EB8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028B0BC 00287EBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028B0C0 00287EC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028B0C4 00287EC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028B0C8 00287EC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028B0CC 00287ECC*/ PPC::Runtime::ASM::blr();
}