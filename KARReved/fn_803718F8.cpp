//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803718F8(PPC::Runtime::GCContext* context)
{
/*803718F8 0036E6F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803718FC 0036E6FC*/ PPC::Runtime::ASM::li(context->r9, 0x1);
/*80371900 0036E700*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r3));
/*80371904 0036E704*/ PPC::Runtime::ASM::li(context->r8, 0x2);
/*80371908 0036E708*/ PPC::Runtime::ASM::li(context->r7, 0x3);
/*8037190C 0036E70C*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80371910 0036E710*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD964 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80371914 0036E714*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*80371918 0036E718*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8037191C 0036E71C*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*80371920 0036E720*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80371924 0036E724*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*80371928 0036E728*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*8037192C 0036E72C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r3));
/*80371930 0036E730*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r3));
/*80371934 0036E734*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r3));
/*80371938 0036E738*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r3));
/*8037193C 0036E73C*/ PPC::Runtime::ASM::blr();
}