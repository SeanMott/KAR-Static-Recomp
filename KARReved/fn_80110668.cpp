//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80110668(PPC::Runtime::GCContext* context)
{
/*80110668 0010D468*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011066C 0010D46C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80110670 0010D470*/ PPC::Runtime::ASM::beqlr();
/*80110674 0010D474*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD734 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110678 0010D478*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8011067C 0010D47C*/ PPC::Runtime::ASM::beqlr();
/*80110680 0010D480*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80110684 0010D484*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 3);
/*80110688 0010D488*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFB30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011068C 0010D48C*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r0);
/*80110690 0010D490*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80110694 0010D494*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80110698 0010D498*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8011069C 0010D49C*/ PPC::Runtime::ASM::blr();
}