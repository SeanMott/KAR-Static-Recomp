//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "__GXFlushTextureState.hpp"
#include "__GXFlushTextureState.hpp"



void fn_GXLoadTlut(PPC::Runtime::GCContext* context)
{
/*803CDE80 003CAC80*/ PPC::Runtime::ASM::mflr(context->r0);
/*803CDE84 003CAC84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803CDE88 003CAC88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803CDE8C 003CAC8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803CDE90 003CAC90*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803CDE94 003CAC94*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803CDE98 003CAC98*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x0);
/*803CDE9C 003CAC9C*/ PPC::Runtime::ASM::lwz(context->r5, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CDEA0 003CACA0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x414, context->r5));
/*803CDEA4 003CACA4*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 803CDEA8 003CACA8  4E 80 00 21 */ blrl
/*803CDEAC 003CACAC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803CDEB0 003CACB0*/ PPC::Runtime::ASM::bl(__GXFlushTextureState);
/*803CDEB4 003CACB4*/ PPC::Runtime::ASM::li(context->r4, 0x61);
/*803CDEB8 003CACB8*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*803CDEBC 003CACBC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CDEC0 003CACC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803CDEC4 003CACC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CDEC8 003CACC8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CDECC 003CACCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803CDED0 003CACD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CDED4 003CACD4*/ PPC::Runtime::ASM::bl(__GXFlushTextureState);
/*803CDED8 003CACD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803CDEDC 003CACDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803CDEE0 003CACE0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 22);
/*803CDEE4 003CACE4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 0, 21);
/*803CDEE8 003CACE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803CDEEC 003CACEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803CDEF0 003CACF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803CDEF4 003CACF4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803CDEF8 003CACF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803CDEFC 003CACFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803CDF00 003CAD00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803CDF04 003CAD04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803CDF08 003CAD08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803CDF0C 003CAD0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803CDF10 003CAD10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803CDF14 003CAD14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803CDF18 003CAD18*/ PPC::Runtime::ASM::blr();
}