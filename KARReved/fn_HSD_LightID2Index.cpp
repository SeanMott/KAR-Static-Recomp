//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"



void fn_HSD_LightID2Index(PPC::Runtime::GCContext* context)
{
/*803FF8E4 003FC6E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803FF8E8 003FC6E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FF8EC 003FC6EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x10);
/*803FF8F0 003FC6F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FF8F4 003FC6F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803FF8F8 003FC6F8*/ PPC::Runtime::ASM::beq(.L_803FF980);
/*803FF8FC 003FC6FC*/ PPC::Runtime::ASM::bge(.L_803FF930);
/*803FF900 003FC700*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*803FF904 003FC704*/ PPC::Runtime::ASM::beq(.L_803FF970);
/*803FF908 003FC708*/ PPC::Runtime::ASM::bge(.L_803FF924);
/*803FF90C 003FC70C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*803FF910 003FC710*/ PPC::Runtime::ASM::beq(.L_803FF968);
/*803FF914 003FC714*/ PPC::Runtime::ASM::bge(.L_803FF9A8);
/*803FF918 003FC718*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*803FF91C 003FC71C*/ PPC::Runtime::ASM::bge(.L_803FF960);
/*803FF920 003FC720*/ PPC::Runtime::ASM::b(.L_803FF9A8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF924, 0x803FF924) //this is a jump label
/*803FF924 003FC724*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x8);
/*803FF928 003FC728*/ PPC::Runtime::ASM::beq(.L_803FF978);
/*803FF92C 003FC72C*/ PPC::Runtime::ASM::b(.L_803FF9A8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF930, 0x803FF930) //this is a jump label
/*803FF930 003FC730*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x80);
/*803FF934 003FC734*/ PPC::Runtime::ASM::beq(.L_803FF998);
/*803FF938 003FC738*/ PPC::Runtime::ASM::bge(.L_803FF954);
/*803FF93C 003FC73C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x40);
/*803FF940 003FC740*/ PPC::Runtime::ASM::beq(.L_803FF990);
/*803FF944 003FC744*/ PPC::Runtime::ASM::bge(.L_803FF9A8);
/*803FF948 003FC748*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x20);
/*803FF94C 003FC74C*/ PPC::Runtime::ASM::beq(.L_803FF988);
/*803FF950 003FC750*/ PPC::Runtime::ASM::b(.L_803FF9A8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF954, 0x803FF954) //this is a jump label
/*803FF954 003FC754*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x100);
/*803FF958 003FC758*/ PPC::Runtime::ASM::beq(.L_803FF9A0);
/*803FF95C 003FC75C*/ PPC::Runtime::ASM::b(.L_803FF9A8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF960, 0x803FF960) //this is a jump label
/*803FF960 003FC760*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803FF964 003FC764*/ PPC::Runtime::ASM::b(.L_803FF9B8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF968, 0x803FF968) //this is a jump label
/*803FF968 003FC768*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*803FF96C 003FC76C*/ PPC::Runtime::ASM::b(.L_803FF9B8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF970, 0x803FF970) //this is a jump label
/*803FF970 003FC770*/ PPC::Runtime::ASM::li(context->r31, 0x2);
/*803FF974 003FC774*/ PPC::Runtime::ASM::b(.L_803FF9B8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF978, 0x803FF978) //this is a jump label
/*803FF978 003FC778*/ PPC::Runtime::ASM::li(context->r31, 0x3);
/*803FF97C 003FC77C*/ PPC::Runtime::ASM::b(.L_803FF9B8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF980, 0x803FF980) //this is a jump label
/*803FF980 003FC780*/ PPC::Runtime::ASM::li(context->r31, 0x4);
/*803FF984 003FC784*/ PPC::Runtime::ASM::b(.L_803FF9B8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF988, 0x803FF988) //this is a jump label
/*803FF988 003FC788*/ PPC::Runtime::ASM::li(context->r31, 0x5);
/*803FF98C 003FC78C*/ PPC::Runtime::ASM::b(.L_803FF9B8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF990, 0x803FF990) //this is a jump label
/*803FF990 003FC790*/ PPC::Runtime::ASM::li(context->r31, 0x6);
/*803FF994 003FC794*/ PPC::Runtime::ASM::b(.L_803FF9B8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF998, 0x803FF998) //this is a jump label
/*803FF998 003FC798*/ PPC::Runtime::ASM::li(context->r31, 0x7);
/*803FF99C 003FC79C*/ PPC::Runtime::ASM::b(.L_803FF9B8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF9A0, 0x803FF9A0) //this is a jump label
/*803FF9A0 003FC7A0*/ PPC::Runtime::ASM::li(context->r31, 0x8);
/*803FF9A4 003FC7A4*/ PPC::Runtime::ASM::b(.L_803FF9B8);
RUNTIME_PPC_JUMP_LABEL(.L_803FF9A8, 0x803FF9A8) //this is a jump label
/*803FF9A8 003FC7A8*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_594 @ Get_MemoryOffset_SDA21);
/*803FF9AC 003FC7AC*/ PPC::Runtime::ASM::li(context->r4, 0x4a8);
/*803FF9B0 003FC7B0*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_593 @ Get_MemoryOffset_SDA21);
/*803FF9B4 003FC7B4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803FF9B8, 0x803FF9B8) //this is a jump label
/*803FF9B8 003FC7B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FF9BC 003FC7BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803FF9C0 003FC7C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803FF9C4 003FC7C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FF9C8 003FC7C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803FF9CC 003FC7CC*/ PPC::Runtime::ASM::blr();
}