//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800793B8(PPC::Runtime::GCContext* context)
{
/*800793B8 000761B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800793BC 000761BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800793C0 000761C0*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_14 @ Get_MemoryOffset_HighBit);
/*800793C4 000761C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800793C8 000761C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800793CC 000761CC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, StructWithFuncPtrs_14 @ Get_MemoryOffset_LowBit);
/*800793D0 000761D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800793D4 000761D4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800793D8 000761D8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800793DC 000761DC*/ PPC::Runtime::ASM::b(.L_80079400);
RUNTIME_PPC_JUMP_LABEL(.L_800793E0, 0x800793E0) //this is a jump label
/*800793E0 000761E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800793E4 000761E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800793E8 000761E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800793EC 000761EC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*800793F0 000761F0*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r0);
/*800793F4 000761F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800793F8 000761F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800793FC 000761FC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80079400, 0x80079400) //this is a jump label
/*80079400 00076200*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80079404 00076204*/ PPC::Runtime::ASM::bne(.L_800793E0);
/*80079408 00076208*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD618 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007940C 0007620C*/ PPC::Runtime::ASM::bl(fn_HSD_Free);
/*80079410 00076210*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80079414 00076214*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80079418 00076218*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8007941C 0007621C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80079420 00076220*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80079424 00076224*/ PPC::Runtime::ASM::blr();
}