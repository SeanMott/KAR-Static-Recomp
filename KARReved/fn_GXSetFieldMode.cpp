//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "__GXFlushTextureState.hpp"
#include "__GXFlushTextureState.hpp"



void fn_GXSetFieldMode(PPC::Runtime::GCContext* context)
{
/*803CFAC0 003CC8C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803CFAC4 003CC8C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803CFAC8 003CC8C8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r4, 24, 22);
/*803CFACC 003CC8CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803CFAD0 003CC8D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803CFAD4 003CC8D4*/ PPC::Runtime::ASM::lis(context->r31, 0xcc01);
/*803CFAD8 003CC8D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803CFADC 003CC8DC*/ PPC::Runtime::ASM::li(context->r30, 0x61);
/*803CFAE0 003CC8E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803CFAE4 003CC8E4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803CFAE8 003CC8E8*/ PPC::Runtime::ASM::lwz(context->r5, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CFAEC 003CC8EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r5));
/*803CFAF0 003CC8F0*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 10, 8);
/*803CFAF4 003CC8F4*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CFAF8 003CC8F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r5));
/*803CFAFC 003CC8FC*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r31));
/*803CFB00 003CC900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r5));
/*803CFB04 003CC904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r31));
/*803CFB08 003CC908*/ PPC::Runtime::ASM::bl(__GXFlushTextureState);
/*803CFB0C 003CC90C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 24);
/*803CFB10 003CC910*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r31));
/*803CFB14 003CC914*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x6800);
/*803CFB18 003CC918*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r31));
/*803CFB1C 003CC91C*/ PPC::Runtime::ASM::bl(__GXFlushTextureState);
/*803CFB20 003CC920*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803CFB24 003CC924*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803CFB28 003CC928*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803CFB2C 003CC92C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803CFB30 003CC930*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803CFB34 003CC934*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803CFB38 003CC938*/ PPC::Runtime::ASM::blr();
}