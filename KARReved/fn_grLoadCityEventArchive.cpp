//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_lbLoadArchive.hpp"



void fn_grLoadCityEventArchive(PPC::Runtime::GCContext* context)
{
/*800CE924 000CB724*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800CE928 000CB728*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CE92C 000CB72C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_895 @ Get_MemoryOffset_HighBit);
/*800CE930 000CB730*/ PPC::Runtime::ASM::lis(context->r6, String_DatSymbol_ "grEventDataAllCity" Get_MemoryOffset_HighBit);
/*800CE934 000CB734*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CE938 000CB738*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800CE93C 000CB73C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CE940 000CB740*/ PPC::Runtime::ASM::addi(context->r4, context->r4, MemoryOffset_895 @ Get_MemoryOffset_LowBit);
/*800CE944 000CB744*/ PPC::Runtime::ASM::addi(context->r6, context->r6, String_DatSymbol_ "grEventDataAllCity" Get_MemoryOffset_LowBit);
/*800CE948 000CB748*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800CE94C 000CB74C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800CE950 000CB750*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
/*800CE954 000CB754*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CE958 000CB758*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CE95C 000CB75C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800CE960 000CB760*/ PPC::Runtime::ASM::blr();
}