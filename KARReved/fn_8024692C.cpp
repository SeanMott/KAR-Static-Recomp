//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8024692C(PPC::Runtime::GCContext* context)
{
/*8024692C 0024372C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x44);
/*80246930 00243730*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80246934 00243734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*80246938 00243738*/ PPC::Runtime::ASM::mr(context->r8, context->r7);
/*8024693C 0024373C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80246940 00243740*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80246944 00243744*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80246948 00243748*/ PPC::Runtime::ASM::ble(.L_80246988);
RUNTIME_PPC_JUMP_LABEL(.L_8024694C, 0x8024694C) //this is a jump label
/*8024694C 0024374C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80246950 00243750*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*80246954 00243754*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x140);
/*80246958 00243758*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*8024695C 0024375C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*80246960 00243760*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*80246964 00243764*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*80246968 00243768*/ PPC::Runtime::ASM::bne(.L_8024697C);
/*8024696C 0024376C*/ PPC::Runtime::ASM::slwi(context->r0, context->r6, 2);
/*80246970 00243770*/ PPC::Runtime::ASM::add(context->r3, context->r7, context->r0);
/*80246974 00243774*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80246978 00243778*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8024697C, 0x8024697C) //this is a jump label
/*8024697C 0024377C*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x4);
/*80246980 00243780*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*80246984 00243784*/ PPC::Runtime::ASM::bdnz(.L_8024694C);
RUNTIME_PPC_JUMP_LABEL(.L_80246988, 0x80246988) //this is a jump label
/*80246988 00243788*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r7));
/*8024698C 0024378C*/ PPC::Runtime::ASM::mr(context->r6, context->r7);
/*80246990 00243790*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80246994 00243794*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80246998 00243798*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024699C 0024379C*/ PPC::Runtime::ASM::ble(.L_802469E8);
RUNTIME_PPC_JUMP_LABEL(.L_802469A0, 0x802469A0) //this is a jump label
/*802469A0 002437A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r6));
/*802469A4 002437A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r6));
/*802469A8 002437A8*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x140);
/*802469AC 002437AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r5));
/*802469B0 002437B0*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x24);
/*802469B4 002437B4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*802469B8 002437B8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x24);
/*802469BC 002437BC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*802469C0 002437C0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*802469C4 002437C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*802469C8 002437C8*/ PPC::Runtime::ASM::bne(.L_802469DC);
/*802469CC 002437CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r8, 5);
/*802469D0 002437D0*/ PPC::Runtime::ASM::add(context->r3, context->r7, context->r0);
/*802469D4 002437D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*802469D8 002437D8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802469DC, 0x802469DC) //this is a jump label
/*802469DC 002437DC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x20);
/*802469E0 002437E0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*802469E4 002437E4*/ PPC::Runtime::ASM::bdnz(.L_802469A0);
RUNTIME_PPC_JUMP_LABEL(.L_802469E8, 0x802469E8) //this is a jump label
/*802469E8 002437E8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*802469EC 002437EC*/ PPC::Runtime::ASM::blr();
}