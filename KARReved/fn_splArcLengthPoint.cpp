//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_splArcLengthGetParameter.hpp"
#include "fn_splGetSplinePoint.hpp"



void fn_splArcLengthPoint(PPC::Runtime::GCContext* context)
{
/*80415958 00412758*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041595C 0041275C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80415960 00412760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80415964 00412764*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80415968 00412768*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8041596C 0041276C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80415970 00412770*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80415974 00412774*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80415978 00412778*/ PPC::Runtime::ASM::bl(fn_splArcLengthGetParameter);
/*8041597C 0041277C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80415980 00412780*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80415984 00412784*/ PPC::Runtime::ASM::bl(fn_splGetSplinePoint);
/*80415988 00412788*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041598C 0041278C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80415990 00412790*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80415994 00412794*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80415998 00412798*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041599C 0041279C*/ PPC::Runtime::ASM::blr();
}