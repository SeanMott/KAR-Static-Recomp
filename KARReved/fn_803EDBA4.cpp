//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803EDBA4(PPC::Runtime::GCContext* context)
{
/*803EDBA4 003EA9A4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE100 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBA8 003EA9A8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r3));
/*803EDBAC 003EA9AC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE10C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBB0 003EA9B0*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*803EDBB4 003EA9B4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE118 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBB8 003EA9B8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE100 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBBC 003EA9BC*/ PPC::Runtime::ASM::lwz(context->r9, STRUCT_BYTE4_COUNT_1805DE104 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBC0 003EA9C0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r3));
/*803EDBC4 003EA9C4*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1805DE110 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBC8 003EA9C8*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*803EDBCC 003EA9CC*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DE11C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBD0 003EA9D0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE10C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBD4 003EA9D4*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE108 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBD8 003EA9D8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r3));
/*803EDBDC 003EA9DC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE114 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBE0 003EA9E0*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*803EDBE4 003EA9E4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBE8 003EA9E8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE118 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBEC 003EA9EC*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*803EDBF0 003EA9F0*/ PPC::Runtime::ASM::add(context->r0, context->r9, context->r0);
/*803EDBF4 003EA9F4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE104 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDBF8 003EA9F8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5a, context->r3));
/*803EDBFC 003EA9FC*/ PPC::Runtime::ASM::add(context->r0, context->r8, context->r0);
/*803EDC00 003EAA00*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE110 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDC04 003EAA04*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*803EDC08 003EAA08*/ PPC::Runtime::ASM::add(context->r0, context->r7, context->r0);
/*803EDC0C 003EAA0C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE11C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDC10 003EAA10*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r3));
/*803EDC14 003EAA14*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r0);
/*803EDC18 003EAA18*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE108 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDC1C 003EAA1C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*803EDC20 003EAA20*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*803EDC24 003EAA24*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE114 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDC28 003EAA28*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62, context->r3));
/*803EDC2C 003EAA2C*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*803EDC30 003EAA30*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803EDC34 003EAA34*/ PPC::Runtime::ASM::blr();
}