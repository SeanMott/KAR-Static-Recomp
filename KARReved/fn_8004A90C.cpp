//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces.hpp"
#include "fn_8000AAC4.hpp"
#include "fn_8000AF5C.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8003D5F0.hpp"
#include "fn_FuncWithAJumpTable_20.hpp"



void fn_8004A90C(PPC::Runtime::GCContext* context)
{
/*8004A90C 0004770C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004A910 00047710*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004A914 00047714*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004A918 00047718*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004A91C 0004771C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8004A920 00047720*/ PPC::Runtime::ASM::bl(fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces);
/*8004A924 00047724*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A928 00047728*/ PPC::Runtime::ASM::bne(.L_8004A980);
/*8004A92C 0004772C*/ PPC::Runtime::ASM::bl(fn_8000AAC4);
/*8004A930 00047730*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004A934 00047734*/ PPC::Runtime::ASM::bne(.L_8004A980);
/*8004A938 00047738*/ PPC::Runtime::ASM::bl(fn_8000AF5C);
/*8004A93C 0004773C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004A940 00047740*/ PPC::Runtime::ASM::beq(.L_8004A948);
/*8004A944 00047744*/ PPC::Runtime::ASM::b(.L_8004A980);
RUNTIME_PPC_JUMP_LABEL(.L_8004A948, 0x8004A948) //this is a jump label
/*8004A948 00047748*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*8004A94C 0004774C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8004A950 00047750*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8004A954 00047754*/ PPC::Runtime::ASM::bne(.L_8004A980);
/*8004A958 00047758*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004A95C 0004775C*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004A960 00047760*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004A964 00047764*/ PPC::Runtime::ASM::bne(.L_8004A980);
/*8004A968 00047768*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*8004A96C 0004776C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8004A970 00047770*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8004A974 00047774*/ PPC::Runtime::ASM::bne(.L_8004A980);
/*8004A978 00047778*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004A97C 0004777C*/ PPC::Runtime::ASM::bl(fn_FuncWithAJumpTable_20);
RUNTIME_PPC_JUMP_LABEL(.L_8004A980, 0x8004A980) //this is a jump label
/*8004A980 00047780*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004A984 00047784*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004A988 00047788*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004A98C 0004778C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004A990 00047790*/ PPC::Runtime::ASM::blr();
}